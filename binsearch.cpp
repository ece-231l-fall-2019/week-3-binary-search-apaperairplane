#include <vector>
#include "search.h"

bool binarySearch(const std::vector<int>& set, int value)
{
	// Done?
	unsigned int begin = 0;
	unsigned int end = set.size();
	
	while(true){
		unsigned int middle = (begin+end)/2;
		if(middle == end)
			break;
		if(set.at(middle) == value){
			return true;
		}
		if(value < set.at(middle)){
			end = middle;
		}else if(value > set.at(middle)){
			begin = middle + 1;
		}
		
	}
	return false;
}

bool binarySearch(const int *begin, const int *end, int value)
{
	// Done?
	
	while(true){
		const int *middle = begin + (end - begin) / 2;
		if(middle == end)
			break;
		if(*middle == value){
			return true;
		}else if(*middle < value){
			begin = middle + 1;
		}else{ //if(*middle > value){
			end = middle;
		}
	}
	return false;
}

