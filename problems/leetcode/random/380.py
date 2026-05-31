class RandomizedSet:

    def __init__(self):
        self.digits_m = {}
        self.digits = []

    def insert(self, val: int) -> bool:
        if val in self.digits_m:
            return False
        self.digits_m[val] = len(self.digits)
        self.digits.append(val)

    def remove(self, val: int) -> bool:
        if not val in self.digits_m:
            return False
        last = self.digits[-1]
        to_remove = self.digits_m[val]
        self.digits_m[last] = to_remove
        self.digits[to_remove] = last

        self.digits.pop()
        self.digits_m.pop(val)
        return True
        

    def getRandom(self) -> int:
        return random.choice(self.digits)


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()