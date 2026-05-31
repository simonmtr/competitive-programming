class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        cars = [[pos,spe] for pos, spe in zip(position, speed)]
        fleets = []
        
        for pos, spe in sorted(cars)[::-1]:
            time_taken = (target - pos) / spe
            if not fleets or time_taken > fleets[-1]:
                fleets.append(time_taken)
        
        return len(fleets)