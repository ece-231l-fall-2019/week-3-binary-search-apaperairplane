#include <vector>

bool linearSearch(const std::vector<int>& set, int value)
{
	// Done?
	for(unsigned int i = 0; i < set.size(); i++){
		if(set[i] == value){
		return true;
		}
	}
	return false;
}

bool linearSearch(const int *begin, const int *end, int value)
{
	// Done?
	for(const int *i = begin; i != end; i++){
		if(*i == value){
			return true;
		}
	}
	return false;
}
