#pragma once
#include <vector>

class CSearchInsertPosition
{
public:
	int searchInsert(std::vector<int>& nums, int target) {
		for (unsigned int i = 0; i < nums.size(); ++i)
		{
			if (target <= nums.at(i)) return i;
		}
		return nums.size();
	}
};

//so easy