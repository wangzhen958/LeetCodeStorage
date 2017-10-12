#pragma once
#include <cstddef>
#include <limits>

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class MergeTwoSortedLists
{
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	}
};


//MergeTwoSortedLists* mts = new MergeTwoSortedLists;
//
//ListNode* a = new ListNode(2);
//ListNode* b = new ListNode(1);
//ListNode* c = mts->mergeTwoLists(a, b);
//while (c->next)
//{
//	std::cout << c->val << std::endl;
//	c = c->next;
//}

//未优化，系统接受
//if (!l1 && !l2) return NULL;
//if (!l1 && l2) return l2;
//if (l1 && !l2) return l1;
//ListNode* Merge = new ListNode(0);
//ListNode* Result = Merge;
//while (true)
//{
//	if (l1->val < l2->val)
//	{
//		Merge->val = l1->val;
//		if (l1->next != NULL) l1 = l1->next;
//		else l1->val = INT_MAX;
//	}
//	else
//	{
//		Merge->val = l2->val;
//		if (l2->next != NULL) l2 = l2->next;
//		else l2->val = INT_MAX;
//	}
//	if (l1->val == INT_MAX && l2->val == INT_MAX) return Result;
//	Merge->next = new ListNode(0);
//	Merge = Merge->next;
//}