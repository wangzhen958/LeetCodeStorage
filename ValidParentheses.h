#pragma once
#include <string>
#include <vector>
#include <map>

class VaildParentheses
{
public:
	bool isValid(std::string s) {
		if (s.size() == 1 || s == "" || s.size() % 2 == 1) return false;
		std::vector <char> vsc;
		int lastCount = 0;
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i] == '(' || s[i] == '[' || s[i] == '{')
			{
				vsc.push_back(s[i]);
				++lastCount;
			}
			if (s[i] == ')' || s[i] == ']' || s[i] == '}')
			{
				if (vsc.empty()) return false;
				if (s[i] - vsc.at(lastCount - 1) == 2 || s[i] - vsc.at(lastCount - 1) == 1)
				{
					vsc.pop_back();
					--lastCount;
				}
				else return false;
			}
		}
		if (vsc.size() > 0) return false;
		return true;
	}
};

//VaildParentheses* vp = new VaildParentheses;
//std::string str = "({})[[{}]{}]";
//std::string str = "[](])";
//std::string str = "}]]{]}))}[[}[[]()){}{]{]{{{{((]";
//std::string str = "()}";
//std::string str = "[}}]";
//std::cout << vp->isValid(str) << std::endl;

//ÐÂË¼Â· perfect
//if (s.size() == 1 || s == "" || s.size() % 2 == 1) return false;
//std::vector <char> vsc;
//int lastCount = 0;
//for (int i = 0; i < s.size(); ++i)
//{
//	if (s[i] == '(' || s[i] == '[' || s[i] == '{')
//	{
//		vsc.push_back(s[i]);
//		++lastCount;
//	}
//	if (s[i] == ')' || s[i] == ']' || s[i] == '}')
//	{
//		if (vsc.empty()) return false;
//		if (s[i] - vsc.at(lastCount - 1) == 2 || s[i] - vsc.at(lastCount - 1) == 1)
//		{
//			vsc.pop_back();
//			--lastCount;
//		}
//		else return false;
//	}
//}
//if (vsc.size() > 0) return false;
//return true;

//²¹¶¡°æ
//if (s.size() == 1 || s == "" || s[0] == 41 || s[0] == 93 || s[0] == 125 || s.size() % 2 == 1) return false;
//std::vector<int> vc;
//std::vector<int> vcCount;
//int k = 0;
//bool lock40 = true;
//bool lock91 = true;
//bool lock123 = true;
//for (int i = 0; i < s.size(); ++i)
//{
//	if (s[i] == 40 && lock40)
//	{
//		for (int j = 0; j < s.size(); ++j)
//		{
//			if (s[j] == 40)
//			{
//				vc.push_back(40);
//				vcCount.push_back(j);
//				++k;
//			}
//			if ((s[j] == 41))
//			{
//				if (vc.size() == 0) return false;
//				if (vc.size() >= 1 && vc.at(k - 1) == 40)
//				{
//					if (((j - vcCount.at(k - 1)) % 2 == 1))
//					{
//						vc.pop_back();
//						vcCount.pop_back();
//						k = k - 1;
//						continue;
//					}
//					if (!vcCount.empty())
//					{
//						if (((j - vcCount.at(k - 1)) % 2 == 0)) return false;
//					}
//				}
//			}
//			if (vc.size() != 0 && j == s.size() - 1) return false;
//		}
//		lock40 = false;
//		k = 0;
//	}
//	if (s[i] == 91 && lock91)
//	{
//		for (int j = 0; j < s.size(); ++j)
//		{
//			if (s[j] == 91)
//			{
//				vc.push_back(91);
//				vcCount.push_back(j);
//				++k;
//			}
//			if ((s[j] == 93))
//			{
//				if (vc.size() == 0) return false;
//				if (vc.at(k - 1) == 91 && vc.size() >= 1)
//				{
//					if (((j - vcCount.at(k - 1)) % 2 == 1))
//					{
//						vc.pop_back();
//						vcCount.pop_back();
//						k = k - 1;
//						continue;
//					}
//					if (!vcCount.empty())
//					{
//						if (((j - vcCount.at(k - 1)) % 2 == 0)) return false;
//					}
//				}
//			}
//			if (vc.size() != 0 && j == s.size() - 1) return false;
//		}
//		lock91 = false;
//		k = 0;
//	}
//	if (s[i] == 123 && lock91)
//	{
//		for (int j = 0; j < s.size(); ++j)
//		{
//			if (s[j] == 123)
//			{
//				vc.push_back(123);
//				vcCount.push_back(j);
//				++k;
//			}
//			if ((s[j] == 125))
//			{
//				if (vc.size() == 0) return false;
//				if (vc.at(k - 1) == 123 && vc.size() >= 1)
//				{
//					if (((j - vcCount.at(k - 1)) % 2 == 1))
//					{
//						vc.pop_back();
//						vcCount.pop_back();
//						k = k - 1;
//						continue;
//					}
//					if (!vcCount.empty())
//					{
//						if (((j - vcCount.at(k - 1)) % 2 == 0)) return false;
//					}
//				}
//			}
//			if (vc.size() != 0 && j == s.size() - 1) return false;
//		}
//		lock123 = false;
//		k = 0;
//	}
//	if (lock123 == false && lock40 == false && lock91 == false) return true;
//}
//return true;