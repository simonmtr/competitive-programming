# Leetcode Problems done


|ID|NOTES|LINK|URL|
|--|-----|----|---|
|**EASY**|**EASY**|**EASY**|**EASY**|**EASY**|
|1|Map for tracking the value and the index, go through all the values and stop as soon as we find a number that fits.|[Code](problems/leetcode/1.cpp)|[LC_URL](https://leetcode.com/problems/two-sum/description/)|
|20|Create a stack and push open brackets onto that stack. In case the current char is a closed bracket, check if the top of the stack is a complementary bracket.|[Code](problems/leetcode/20.cpp)|[LC_URL](https://leetcode.com/problems/valid-parentheses/description/)|
|121|Go through all prices and always save the lowest, max = difference from lowest - current.|[Code](problems/leetcode/121.cpp)|[LC_URL](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/)|
|125|Two pointers, if not alpha numerical skip char, if alpha numerical compare left and right char. Go through whole string.|[Code](problems/leetcode/125.cpp)|[LC_URL](https://leetcode.com/problems/valid-palindrome/description/)|
|217|Set for keeping seen numbers, if we find number in the set, we return.|[Code](problems/leetcode/217.cpp)|[LC_URL](https://leetcode.com/problems/contains-duplicate/description/)|
|242|One array of 26 chars, for the first char add one for each existing char, for the second string substract one. Check if all values are 0 in the end. Sorting is also an option, by just sorting both and comparing if they are equal.|[Code](problems/leetcode/242.cpp)|[LC_URL](https://leetcode.com/problems/valid-anagram/description/)|
|**MEDIUM**|**MEDIUM**|**MEDIUM**|**MEDIUM**|**MEDIUM**|
|3|Use set for seen values, go through list with left and right pointer and remove from left until not equal chars. Keep count of maximum value.|[Code](problems/leetcode/3.cpp)|[LC_URL](https://leetcode.com/problems/longest-substring-without-repeating-characters/description/)|
|11|Two pointers, go from outside to the middle and always calculate the max water, move away from the smaller 'pillar'.|[Code](problems/leetcode/11.cpp)|[LC_URL](https://leetcode.com/problems/container-with-most-water/description/)|
|15|Three pointers, for each number do a two pointer method and calculate the total. if the total is found, add it to a list and return that list in the end.|[Code](problems/leetcode/15.cpp)|[LC_URL](https://leetcode.com/problems/3sum/description/)|
|36|Implementation only, keep track of all boxes, rows and colums in separate data structures and iterate through the input.|[Code](problems/leetcode/36.cpp)|[LC_URL](https://leetcode.com/problems/group-anagrams/description/)|
|49|Use array of 26 chars as key for a dictionary, save all anagrams strings in there. Output that anagrams in the end.|[Code](problems/leetcode/49.cpp)|[LC_URL](https://leetcode.com/problems/group-anagrams/description/)|
|128|Create a set for the numbers, then iterate through the set and for each number we check, if the next, and the next to next and so on number is in the set, only if the previous number is not in the set though. We keep count of the max sequence.|[Code](problems/leetcode/128.cpp)|[LC_URL](https://leetcode.com/problems/longest-consecutive-sequence/description/)|
|155|Two stacks, one for the actual stack and one for the minimum value. Each entry check if we have to push to the minstack.|[Code](problems/leetcode/155.cpp)|[LC_URL](https://leetcode.com/problems/min-stack/description/)|
|167|Two pointers, works as its sorted, and decrease right pointer if number is too big, increase left pointer if too small. If goal is found return left and right pointer values.|[Code](problems/leetcode/167.cpp)|[LC_URL](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/)|
|238|Iterate through the list from both sides, keeping count from beginning and ending. Create new vector/array with these values.|[Code](problems/leetcode/238.cpp)|[LC_URL](https://leetcode.com/problems/product-of-array-except-self/description/)|
|347|Prio Queue with pair of {number, count}. Build the heap and keep K elements in it. In the end iterate through the heap and output the resulting numbers.|[Code](problems/leetcode/347.cpp)|[LC_URL](https://leetcode.com/problems/top-k-frequent-elements/description/)|
|424|Sliding window(l,r pointer), try for each window if replacement amount < max replacement allowed, update the result with longest.|[Code](problems/leetcode/424.cpp)|[LC_URL](https://leetcode.com/problems/longest-repeating-character-replacement/)|
|567|Sliding Window, use Map for tracking the counts. Slide Window over s2 and reduce counts if we find a matching value. In the end, if the count of the not matched s1 values is 0 we know we found the anagram.|[Code](problems/leetcode/567.cpp)|[LC_URL](https://leetcode.com/problems/permutation-in-string/)|
|**HARD**|**HARD**|**HARD**|**HARD**|**HARD**|
|42|Left and right pointer as well as a maximum value of left and right, the for each step of the way we calculate the water trapped in that step. Return the volume of the water in the end.|[Code](problems/leetcode/42.cpp)|[LC_URL](https://leetcode.com/problems/trapping-rain-water/description/)|
|76|Map for the letters we have to find. Two pointers to check for each index until all the needed chars are found. In the end, check the lowest length. Output that number.|[Code](problems/leetcode/76.cpp)|[LC_URL](https://leetcode.com/problems/minimum-window-substring/description/)|
|239|Use a vector for the result, deque for the checking. For each step, remove the numbers that are smaller than the current one. Remove also the number that is i-k so that we remove the one that is not in the window. Output the result of the highest numbers, the front of the deque, for each window.|[Code](problems/leetcode/239.cpp)|[LC_URL](https://leetcode.com/problems/sliding-window-maximum/description/)|
|**EXAMPLE**|**EXAMPLE**|**EXAMPLE**|**EXAMPLE**|**EXAMPLE**|
|X|Explanation.|[Code](problems/leetcode/XA.cpp)|[LC_URL](URL)|