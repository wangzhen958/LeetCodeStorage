#pragma once
#include <vector>
#include <string>

class CLongestCommonPrefix 
{
public:
	std::string longestCommonPrefix(std::vector<std::string>& strs) 
	{
		if (strs.size() == 0) return "";
		char ch;
		std::string vs;
		ch = strs[0][0];
		int j = 0;
		while (true)
		{
			for (unsigned int i = 0; i < strs.size(); ++i)
			{
				if (strs[i] == "") return "";
				if (ch != strs[i][j])
				{
					if (j == 0) return "";
					else return vs;
				}

			}
			vs += ch;
			if (strs[0].size() >= j+1 ) ch = strs[0][j + 1];
			else return vs;
			j++;
		}
	}
};

//测试
//std::vector<std::string> StringSet;
//StringSet.push_back("a");
////StringSet.push_back("aa");
//*StringSet.push_back("abc");
//StringSet.push_back("abcd");
//StringSet.push_back("abde");*/
////StringSet.push_back("[]");
//CLongestCommonPrefix* lcp = new CLongestCommonPrefix();
//std::cout << lcp->longestCommonPrefix(StringSet) << std::endl;

//空值bug
//if (strs.size() == 0) return "";
//std::string vs;
//vs += strs[0][0];
//int j = 0;
//while (true)
//{
//	for (unsigned int i = 0; i < strs.size(); ++i)
//	{
//		if (strs[i] == "") return "";
//		if (vs[j] != strs[i][j])
//		{
//			if (j == 0) return "";
//			else return vs;
//		}
//
//	}
//	if (strs[0].size() == j + 1) return vs;
//	vs += strs[0][j + 1];
//	j++;
//}

//最精简版，有输入“”的bug
//if (strs.size() == 0) return "";
//std::string vs;
//vs += strs[0][0];
//int j = 0;
//while (true)
//{
//	for (unsigned int i = 0; i < strs.size(); ++i)
//	{
//		if (vs[j] != strs[i][j])
//		{
//			if (j == 0) return "";
//			else return vs;
//		}
//
//	}
//	if (strs[0].size() == j + 1) return vs;
//	vs += strs[0][j + 1];
//	j++;
//}

//下面版本的缩减版
//if (strs.size() == 0 && (strs[0][0] >= 122 || strs[0][0] <= 65 || (strs[0][0] >= 90 && strs[0][0] <= 97))) return "";
//std::string vs;
//vs += strs[0][0];
//int j = 0;
//while (true)
//{
//	for (unsigned int i = 0; i < strs.size(); ++i)
//	{
//		if (vs[j] != strs[i][j] && (strs[i][j] >= 122 || strs[i][j] <= 65 || (strs[i][j] >= 90 && strs[i][j] <= 97)))
//		{
//			if (j == 0) return "";
//			else return vs;
//		}
//
//	}
//	if (strs[0].size() == j + 1) return vs;
//	vs += strs[0][j + 1];
//	j++;
//}

//可行，但是效率不高，运行时间错误
//std::string longestCommonPrefix(std::vector<std::string>& strs)
//{
//	std::vector<char> vc;
//	if (strs[0][0] >= 122 || strs[0][0] <= 65 || (strs[0][0] >= 90 && strs[0][0] <= 97)) return "";
//	vc.push_back(strs[0][0]);
//	int j = 0;
//	while (true)
//	{
//		for (unsigned int i = 0; i < strs.size(); ++i)
//		{
//			if (vc[j] != strs[i][j] && strs[i][j] >= 122 || strs[i][j] <= 65 || (strs[i][j] >= 90 && strs[i][j] <= 97))
//			{
//				if (j == 0)
//				{
//					return "";
//				}
//				else
//				{
//					std::string Tempstr;
//					for (unsigned int k = 0; k < vc.size(); ++k)
//					{
//						Tempstr += vc.at(k);
//					}
//					return Tempstr;
//				}
//			}
//
//		}
//		if (strs[0].size() == j + 1)
//		{
//			std::string Tempstr;
//			for (unsigned int k = 0; k < vc.size(); ++k)
//			{
//				Tempstr += vc.at(k);
//			}
//			return Tempstr;
//		}
//		vc.push_back(strs[0][j + 1]);
//		j++;
//	}
//}
