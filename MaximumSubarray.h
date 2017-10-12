#pragma once
#include <vector>

class CMaximumSubarray
{
public:
	int maxSubArray(std::vector<int>& nums) {
		if (nums.size() == 1) return nums.at(0);
		int Min = 0;
		int Sum = nums.at(0);
		int Ans = nums.at(0);

		for (int i = 1; i < nums.size(); i++) {
			if (Sum < Min) Min = Sum;
			Sum += nums.at(i);
			if (Sum - Min > Ans)
				Ans = Sum - Min;
		}
		return Ans;
	}
};

CMaximumSubarray* ms = new CMaximumSubarray;
std::vector<int> ss{ -2,1,-3,4,-1,2,1,-5,4 };
std::cout << ms->maxSubArray(ss) << std::endl;

/************************************************************************************************************/
/* Find the contiguous subarray within an array (containing at least one number) which has the largest sum.
/* For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
/* the contiguous subarray [4,-1,2,1] has the largest sum = 6.                                              
/************************************************************************************************************/

//prefect solution
//int maxSubArray(std::vector<int>& nums) {
//	if (nums.size() == 1) return nums.at(0);
//	int Max = 0;
//	int Sum = nums.at(0);
//	int Ans = nums.at(0);
//
//	for (int i = 1; i < nums.size(); i++) {
//		if (Sum < Max) Max = Sum;
//		Sum += nums.at(i);
//		if (Sum - Max > Ans)
//			Ans = Sum - Max;
//	}
//	return Ans;
//}

//cann't be accepted, because would Exceed Time Limit when run using a plenty of data
//int maxSubArray(std::vector<int>& nums) {
//	if (nums.size() == 1) return nums.at(0);
//	int MaxSum = INT_MIN;
//	int TempMaxSum = 0;
//	for (unsigned int i = 0; i < nums.size(); ++i)
//	{
//		if (i == nums.size() - 1)
//			if (nums.at(i) > MaxSum) MaxSum = nums.at(i);
//		for (unsigned int j = i + 1; j < nums.size(); ++j)
//		{
//			for (unsigned int k = i; k <= j; ++k)
//			{
//				TempMaxSum += nums.at(k);
//				if (TempMaxSum > MaxSum)
//					MaxSum = TempMaxSum;
//			}
//			TempMaxSum = 0;
//		}
//	}
//	return MaxSum;
//}