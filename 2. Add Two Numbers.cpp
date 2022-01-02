/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0,num=0;
        ListNode* tmp1=l1;
        ListNode* tmp2=l2;
        ListNode* t1,*t2;
        int x=0;
        while(tmp1!=NULL and tmp2!=NULL)
        {
            num=tmp1->val + tmp2->val +carry;
            //tmp1=tmp1->next;
            carry=0;
            carry=int(num/10);
            //num%=10;
            tmp1->val=num%10;
            tmp2->val=num%10;
            t1=tmp1;
            t2=tmp2;
            tmp2=tmp2->next;
            tmp1=tmp1->next;
        }
        while(tmp2!=NULL)
        {
            num=tmp2->val +carry;
            carry=0;
            carry=int(num/10);
            //num%=10;
            tmp2->val=num%10;
            t2=tmp2;
            tmp2=tmp2->next;
        }
        while(tmp1!=NULL)
        {
            x=1;
            num=tmp1->val +carry;
            carry=0;
            carry=int(num/10);
            //num%=10;
            tmp1->val=num%10;
            t1=tmp1;
            tmp1=tmp1->next;
        }
        if(carry){
            ListNode* tmp=new ListNode;
            if(tmp!=NULL)
            {
            tmp->val=1;
            tmp->next=NULL;
            t1->next=tmp;
            t2->next=tmp;
            }
        }
        if(x){
            return l1;
        }
        return l2;
    }
};
