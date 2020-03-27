# String to Integer (atoi)
This repository contains code of a solution to the atoi medium leetcode problem.

# Algorithm


# Runtime Complexity Analysis


# Space Complexity Analysis
This atoi algorithm alocates space for 6 integers at most. This is independent of the size of the input which means the complexity of the extra space used is constant meaning it is O(1). However, the input string itself also must be stored so that it can be accessed by the algorithm. The space used by the string increases with its size giving it a space complexity of O(n). A space complexity of O(n+6) reduces to O(n) as it is the highest order term and will grow faster than the constant as the input size grows. Thus the space complexity of this algorithm is O(n).   
