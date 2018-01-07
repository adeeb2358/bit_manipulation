#include "bit_manipulation.h"
/*
	http://codeforwin.org/2016/01/c-program-to-set-nth-bit-of-number-using-bitwise-operator.html
*/
 bool isPowerOfTwo(int number){
 	
 	return (number && !(number & (number -1)));
 }

 int count_one(int number){
 	int count = 0;
 	while(number){
 		number = number&(number - 1);
 		count ++;
 	}
 	return count;
 }

 bool checkNthBit(int number,int bit_pos){
 	if(number & (1 << bit_pos)){
 		return true;
 	}
 	return false;
 }


