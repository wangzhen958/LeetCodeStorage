#pragma once
#include <vector>

class RemoveDuplicatesfromSortedArray
{
public:
	int removeDuplicates(std::vector<int>& nums) {
		int i = 0;
		for (int n : nums)
			if (!i || n > nums[i - 1])
				nums[i++] = n;
		return i;
	}

};


//std::vector<int> ss{ 1,1,2 };
//RemoveDuplicatesfromSortedArray *rd = new RemoveDuplicatesfromSortedArray;
//rd->removeDuplicates(ss);