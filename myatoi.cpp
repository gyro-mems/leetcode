#include <string>

#define MAX 2147483647
#define MIN -2147483648

class Solution {
public:
	int myAtoi(std::string str) {
		int len = str.length();
		int sign = 1;  // set to negative 1 if the value is negative
		int total = 0;  // keeps track of what to output as the integer
        
		int i = 0;
		while(i < len && str[i] == ' '){
			i++;
		}
		
		if(str[i] == '-'){
			sign = -1;
			i++;
		} else if(str[i] == '+') {
			sign = 1;  // the default (already 1)
			i++;
		}
        
		for(i; i < len; i++){
			if(48 <= (int)str[i] && (int)str[i] <= 57){  // does not include '0'
				int next_digit = (int)str[i] - 48; 
				// mult section
				if(sign == 1 && total != 0){
					int max_multiplications = MAX/total;
					if(max_multiplications >= 10){
						total *= 10;
					} else {
						return MAX;
					}
				} else if(sign == -1 && total != 0){
					int max_multiplications = MIN/total;
					if(max_multiplications >= 10){
						total *= 10;
					} else {
						return MIN;
					}
				}
                
				// add/sub section
				if(sign == 1){
					if(total <= MAX-next_digit){
						total += next_digit;
					} else {
						return MAX;
					}
				} else if(sign == -1){
					if(total >= MIN+next_digit){
						total -= next_digit;
					} else {
						return MIN;
					}
				}
			} else {
				return total;
			}
		}  
		return total;
	}
};
