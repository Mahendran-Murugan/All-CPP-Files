#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummyNode = new ListNode(0);
        ListNode *temp = dummyNode;
        int carryValue = 0;
        int sum = 0;
        while (l1 != NULL || l2 != NULL || carryValue)
        {
            sum = 0;
            if (l1 != NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carryValue;
            ListNode *newNode = new ListNode(sum % 10);
            carryValue = sum / 10;
            temp->next = newNode;
            temp = temp->next;
        }
        return dummyNode->next;
    }
};