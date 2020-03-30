# String to Integer (atoi)
This repository contains code of a solution to the atoi medium leetcode problem.

# Algorithm


# Runtime Complexity Analysis
This atoi algorithm does a constant number of operations for each character looked at in the input string. When it removes blank spaces from the input string, the only operation it does is increase the index to look at the next character in the string. The string will either be entirely made up of blank spaces which would be a runtime complexity of O(n), or it will find a character that is not a blankspace and leave the rest of the characters to be looked at by the rest of the algorithm. The sign would then be checked which is a constant number of operations. Then the algorithm would then check the remaining characters until a non-numeric character was found or at most 11 numeric characters were used in a row. So once numbers are found in the string, at most 11 characters with a constant number of operations for each character will be searched. This means the part of the program that reads the actual number in the input string is an O(1) operation as the size of the string can grow arbitrarily large, but the amount of operations in this part remains the same. However since big O notation takes into acount the worst case runtime, the runtime complexity of the algorithm is O(n). This is because the worst case is that all the characters are blank spaces and the algorithm has to go through the entire length of the input string. 

# Space Complexity Analysis
This atoi algorithm alocates space for 6 integers at most. This is independent of the size of the input which means the complexity of the extra space used is constant meaning it is O(1). However, the input string itself also must be stored so that it can be accessed by the algorithm. The space used by the string increases with its size giving it a space complexity of O(n). A space complexity of O(n+6) reduces to O(n) as it is the highest order term and will grow faster than the constant as the input size grows. Thus the space complexity of this algorithm is O(n).   
