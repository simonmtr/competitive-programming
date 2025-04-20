# CF Problems done

## 2000

**Total: 0/50**
|COUNTER|DATE|ID|RATING|NOTES|LINK|
|-------|----|--|------|-----|----|

## 1900

**Total: 0/50**
|COUNTER|DATE|ID|RATING|NOTES|LINK|
|-------|----|--|------|-----|----|

## 1800

**Total: 0/50**
|COUNTER|DATE|ID|RATING|NOTES|LINK|
|-------|----|--|------|-----|----|

## 1700

**Total: 1/50**
|COUNTER|DATE|ID|RATING|NOTES|LINK|
|-------|----|--|------|-----|----|
|1|13.04.2025|466C|1700|One list for keeping track of the total sum at point i. Cover edgecase where i%3!=0. Go through the sums list and increase a counter for everytime the value is a third and add this count to the result every time it is two thirds. Output the result in the end.|[Code](cf_problems/1700/466C.cpp)|

## 1500

**Total: 3/50**
|COUNTER|DATE|ID|RATING|NOTES|LINK|
|-------|----|--|------|-----|----|
|3|15.04.2025|580C|1500|DFS with keeping track of the cats already seen on the route. Create a dict for connections between nodes. Keep counter of possible paths when leaf node is reached. Output that count in the end.|[Code](cf_problems/1500/580C.cpp)|
|2|12.04.2025|550A|1500|Three booleans, one for ABfound, one for BAfound, one if its overlapping. If statements to check AB and BA where found while not being overlapped. Output the result.|[Code](cf_problems/1500/550A.cpp)|
|1|12.04.2025|455A|1500|Create one list to store the amounts of each number. Create DP, for each step find the max of the last one or the second to last one + the amount of the current number*the current number. Output dp[n] at the end.|[Code](cf_problems/1500/455A.cpp)|

## 1400

**Total: 1/50**
|COUNTER|DATE|ID|RATING|NOTES|LINK|
|-------|----|--|------|-----|----|
|1|14.04.2025|520B|1400|BFS with keeping track of the depth on in the visited list. If the value is equal to m, output the depth.|[Code](cf_problems/1400/520B.cpp)|

## 1300

**Total: 3/50**
|COUNTER|DATE|ID|RATING|NOTES|LINK|
|-------|----|--|------|-----|----|
|3|16.04.2025|189A|1300|Create DP with values on dp[a,b,c] = 1. Go through l and for each i check if i+a,b,c < l -> find max of last dp[a,b,c] and current dp+1. Output dp[l] in the end.|[Code](cf_problems/1300/189A.cpp)|
|2|07.04.2025|4C|1300|Use a map, if the name is in the map already add a counter to it, else add it to the map. Output the name in order.|[Code](cf_problems/1300/4C.cpp)|
|1|05.04.2025|25A|1300|Count even and odd numbers and have one variable to overwrite the latest even or odd number. In the end check the bigger count and output the corresponding number.|[Code](cf_problems/1300/25A.cpp)|

## 1200

**Total: 4/50**
|COUNTER|DATE|ID|RATING|NOTES|LINK|
|-------|----|--|------|-----|----|
|4|19.04.2025|514A|1200|All numbers >4 should be switched, except the leading 9.|[Code](cf_problems/1200/514A.cpp)
|3|18.04.2025|1352C|1200|Calculate the kth integer which we then have to increase for each multiplier of n up to that point|[Code](cf_problems/1200/1352C.cpp)|
|2|17.04.2025|466A|1200|Check edgecase if its cheaper to just always take the one stop ticket over the multistop ticket. If no, calculate the amounts of being able to use the multistop ticket and the min of using a multistop or multiple one stop tickets for the rest of the trip. Output that calculation.|[Code](cf_problems/1200/466A.cpp)|
|1|19.04.2024|327A|1200|Keep counter of existing ones, keep continuing sum of 0s that could turn into ones, update answer based on continued sum, output is either n-1 if its all 1s from begin with or the ones + commulative answer.|[Code](cf_problems/1200/327A.cpp)|

## 1100

**Total: 1/50**
|COUNTER|DATE|ID|RATING|NOTES|LINK|
|-------|----|--|------|-----|----|
|1|06.04.2025|158B|1100|Count the groups of 1,2,3,4 people. If statement to prioritize matching while reducing the group count, for example 3s match with 1s, 2s with 2s, .... Output the taxi count at the end.|[Code](cf_problems/1100/158B.cpp)|

## 1000

**Total: 6/50**
|COUNTER|DATE|ID|RATING|NOTES|LINK|
|-------|----|--|------|-----|----|
|7|19.04.2025|131A|1000|Make sure to cover all edge cases for strings of length 1. Other than that, check the restrictions and ouput the according string.|
|6|05.04.2025|479A|1000|Return the max() of all the possible calculations.|[Code](cf_problems/1000/479A.cpp)|
|5|05.04.2025|122A|1000|If statement with modulo on all possible numbers between 0 and 1000 that contain a 7 or 4.|[Code](cf_problems/1000/122A.cpp)|
|4|05.04.2025|58A|1000|Two pointers, one for the 'hello' string and one for the input string. Go through the input string and count the hits on 'hello'. Check in the end if lenght of 'hello' is same as counter, output YES and NO accordingly.|[Code](cf_problems/1000/58A.cpp)|
|3|05.04.2025|1A|1000|Calculate ((n+a-1)/a) * ((m+a-1)/a) to get the output.|[Code](cf_problems/1000/1A.cpp)|
|2|05.04.2025|69A|1000|Go through all inputs, track count for each x y z. Check if all sums are 0 in the end and output the result.|[Code](cf_problems/1000/69A.cpp)|
|1|04.04.2025|118A|1000|Go through string, check for the vowel, if yes add a '.' to the place where the vowel would have been. Output the resulting string.|[Code](cf_problems/1000/118A.cpp)|

## <1000
**30/50**
|COUNTER|DATE|ID|RATING|NOTES|LINK|
|-------|----|--|------|-----|----|
|50|21.04.2025|96A|900|.|[Code](cf_problems/900/96A.cpp)|
|49|21.04.2025|405A|900|.|[Code](cf_problems/900/405A.cpp)|
|48|21.04.2025|133A|900|.|[Code](cf_problems/900/133A.cpp)|
|47|20.04.2025|318A|900|Differentiate between searching for odd or even number by seeing if k*2 smaller or greater than n. Find the kth even or odd number. Output that number in the end.|[Code](cf_problems/900/318A.cpp)|
|46|20.04.2025|160A|900|Read input and save total sum of coins. Sort the coins descending. Iterate through the coins, checking everytime if mycoins are greater than half the coins, keep count of the coins. Output the cound of the coins in the end.|[Code](cf_problems/900/160A.cpp)|
|45|20.04.2025|443A|800|Optional: Parse the input string to remove the spaces. Afterwards find out, with some string logic, the actual characters given in the input string. Save them in a set. Output the length of the set in the end.|[Code](cf_problems/800/443A.cpp)|
|44|20.04.2025|785A|800|Create map of figures with values of faces. Iterate through the input and keep count of the faces. Output the sum of faces in the end.|[Code](cf_problems/800/785A.cpp)|
|43|20.04.2025|148A|800|Iterate the dragons and check for each if one of the inputs creates modulo 0. Count the hits. Output the hits in the end.|[Code](cf_problems/800/148A.cpp)|
|42|20.04.2025|996A|800|For each bill, take as many of the highest bill and then move on to the next bill. Keep count of the bills used. Output the amount in the end.|[Code](cf_problems/800/996A.cpp)|
|41|20.04.2025|144A|800|Keep track of min and max index and then calulate the distance to end/beginning. Keep in mind if they pass each other to substract 1. Output the result in the end.|[Code](cf_problems/800/144A.cpp)|
|40|20.04.2025|469A|800|Iterate through input, add possible levels to a set. If set equals the length of the levels all levels can be done. Output according string.|[Code](cf_problems/800/469A.cpp)|
|39|20.04.2025|520A|800|Set for keeping track of already seen chars, add to set if not seen. Output YES if set is size 26, else output NO.|[Code](cf_problems/800/520A.cpp)|
|38|20.04.2025|1328A|800|For each a b check if a is divisible by b without leftover (=edgecase). Otherwise take b-(a%b), which is needed for a to be divisible by b. Output this number.|[Code](cf_problems/800/1328A.cpp)|
|37|20.04.2025|705A|800|For each odd number and even number add the corresponding string. Edgecase if n=1. Output the result at the end.|[Code](cf_problems/800/705A.cpp)|
|36|20.04.2025|228A|800|Create set to track colors that are duplicated, count these numbers. Output the count in the end.|[Code](cf_problems/800/228A.cpp)|
|35|20.04.2025|61A|800|XOR all values and output the result.|[Code](cf_problems/800/61A.cpp)|
|34|20.04.2025|200B|800|Add all values of of the percentages and divide by amount of values. Output this result.|[Code](cf_problems/800/200B.cpp)|
|33|20.04.2025|136A|800|Create array with numbers of the gifters of the gift. Output the array in order.|[Code](cf_problems/800/136A.cpp)|
|32|20.04.2025|486A|800|Check if even or odd. If odd, result is -(n/2 + 1), if even result is n/2. Output the result in the end.|[Code](cf_problems/800/486A.cpp)|
|31|20.04.2025|467A|800|Iterate all rooms, if size - people >= 2 add one to the counter of possible rooms. Output the room amount at the end.|[Code](cf_problems/800/467A.cpp)|
|30|20.04.2025|266B|800|Save input in string, go through string as many times as input says, each time check if s[i] is a boy and s[i+1] is a girl, if yes then switch. Output the complete string in the end.|[Code](cf_problems/800/266B.cpp)|
|29|20.04.2025|1030A|800|Go through the input, if its a 1 output HARD. Once through all inputs output EASY.|[Code](cf_problems/800/1030A.cpp)|
|28|20.04.2025|271A|800|Use set to keep track of unique digits, for each digit check if its already in the set, if yes try next higher number. Care for upper bound of 9012 (in case the number is 9000). Output correct number once found that the set is of length 4.|[Code](cf_problems/800/271A.cpp)|
|27|20.04.2025|116A|800|Keep count of max capacity and current people in the tram. For each station, see the capacity at the end and take the max from current max and temp_max. Output the max at the end.|[Code](cf_problems/800/116A.cpp)|
|26|20.04.2025|677A|800|Iterate through input of friends, if taller than fence add 2, else add 1 to the result. Output the result.|[Code](cf_problems/800/677A.cpp)|
|25|20.04.2025|41A|800|Iterate string length and compare index and index-1-i. Output NO if not same, else YES.|[Code](cf_problems/800/41A.cpp)|
|24|20.04.2025|110A|800|While the number is bigger than 0 check if %10 is 7 or 4, if yes divide by 10 and add to the luckynumber count. Do the same for the lucky number count, but now if its not a lucky number exit and output NO. Output YES if loop is successful.|[Code](cf_problems/800/110A.cpp)|
|23|20.04.2025|977A|800|One loop and decide with if %10!=0 what action to choose. Output the result.|[Code](cf_problems/800/977A.cpp)|
|22|20.04.2025|59A|800|Count upper and lower case letters, change all accordingly to the rules. Output the new string.|[Code](cf_problems/800/59A.cpp)|
|21|20.04.2025|546A|800|Take initial money and substract initial price, then loop through the bananas and substract i*initial_price. Edge case if there is enough money already, then outout 0. Output absolute of the money.|[Code](cf_problems/800/546A.cpp)|
|20|20.04.2025|617A|800|Take maximum of steps of 5 and then one more. Output amount.|[Code](cf_problems/800/617A.cpp)|
|19|20.04.2025|281A|800|Take first letter and capitalize, then substring the rest of the string. Output new string.|[Code](cf_problems/800/281A.cpp)|
|18|20.04.2025|339A|800|Count ones twos threes, later print them out in order with + between.|[Code](cf_problems/800/339A.cpp)|
|17|20.04.2025|112A|800|Make strings lowercase and directly compare with < > ==. Output accordingly.|[Code](cf_problems/800/112A.cpp)|
|16|20.04.2025|263A|800|Find the coordinates of the 1. Use math to calculate distance to middle. Output distance.|[Code](cf_problems/800/263A.cpp)|
|15|20.04.2025|50A|800|Output (n*m)/2.|[Code](cf_problems/800/50A.cpp)|
|14|20.04.2025|158A|800|Find the number that is the bound, iterate through the array and count numbers that are greater that this number. Output that count.|[Code](cf_problems/800/158A.cpp)|
|13|19.04.2025|282A|800|Check first and last char of input string for + or -. Add or subtract to the result. Output the result.|[Code](cf_problems/800/282A.cpp)|
|12|19.04.2025|71A|800|For strings shorter that 10 return the string, for others return the first char + len-2 + last char. Output for each string.|[Code] (cf_problems/800/71A.cpp)|
|11|19.04.2025|344A|800|Compare current to last magnet, if different add one to the groups. Output the groups in the end.|[Code](cf_problems/800/344A.cpp)|
|10|04.04.2025|266A|800|Go through the string, if the last char is the same as the current, add one to the count and output the count in the end.|[Code](cf_problems/800/266A.cpp)|
|9|03.04.2025|2095A|X|Output the word 'puzzling'.|-|
|8|26.02.2025|1692A|800|Count the amount of numbers that are higher than a, output the count.|-|
|7|24.02.2025|1742A|800|If statement that checks if one is the sum of the others, output YES or NO depending on the result.|-|
|6|22.02.2025|734A|800|Keep counter for the case that Anton wins, in the end calculate if he won more than half, its even or lost more than half.|-|
|5|22.02.2025|791A|800|As long as a<=b increase a by 3 and b by 2, keep count and output the count in the end.|-|
|4|20.02.2025|236A|800|Add chars to list, if in the end %2 == 0 -> Female|-|
|3|20.02.2025|231A|800|Sum the votes, if its more than 2 add to the result counter and output the result.|-|
|2|18.02.2025|2069A|800|Check the array if the string '101' exists. If thats the case there is an error and output NO|-|
|1|18.02.2025|4A|800|If watermelons are divisible by 2 and more than 2 then output YES.|-|
---