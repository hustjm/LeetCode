

#include "solution_add_two_nums.h"

ListNode* SLT_AddTwoNums::addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode* result = NULL;
    ListNode* p_list1 = l1;
    ListNode* p_list2 = l2;
    ListNode* p_result = result;
    int next_add = 0;
    while (p_list1 != NULL || p_list2 != NULL)
    {
        ListNode* node = new ListNode(0);
        int value1 = 0;
        int value2 = 0;
        if (p_list1 != NULL)
        {
            value1 = p_list1->val;
        }
        if (p_list2 != NULL)
        {
            value2 = p_list2->val;
        }

        int total = value1 + value2 + next_add;
        int value = total % 10;
        node->val = value;
        next_add = total / 10;
        if (p_result == NULL)
        {
            p_result = node;
            result = node;
        }
        else
        {
            p_result->next = node;
            p_result = node;
        }

        if (p_list1 != NULL)
        {
            p_list1 = p_list1->next;
        }

        if (p_list2 != NULL)
        {
            p_list2 = p_list2->next;
        }
    }

    if (next_add != 0)
    {
        ListNode* final_node = new ListNode(next_add);
        if (p_result == NULL)
        {
            p_result = final_node;
            result = final_node;
        }
        else
        {
            p_result->next = final_node;
            p_result = final_node;
        }
    }

    return result;
}

void TestCase_AddTwoNums::GenerateList(ListNode** p_list, std::vector<int>& values)
{
    ListNode* p_head = *p_list;
    for (auto iter = values.begin(); iter != values.end(); ++iter)
    {
        ListNode* p_node = new ListNode(*iter);
        if (p_head == NULL)
        {
            p_head = p_node;
            *p_list = p_node;
        }
        else
        {
            p_head->next = p_node;
            p_head = p_node;
        }
    }
}

void TestCase_AddTwoNums::run()
{
    ListNode* p_list1 = NULL;
    std::vector<int> list1_values = { 4, 5, 8 };
    GenerateList(&p_list1, list1_values);

    ListNode* p_list2 = NULL;
    std::vector<int> list2_values = { 3, 7, 9 };
    GenerateList(&p_list2, list2_values);

    ListNode* result = NULL;
    SLT_AddTwoNums solution;
    result = solution.addTwoNumbers(p_list1, p_list2);

    ListNode* result_head = result;
    while (result_head!=NULL)
    {
        int value = result_head->val;
        if (result_head->next != NULL)
        {
            printf("%d -> ", value);
        }
        else
        {
            printf("%d", value);
        }

        result_head = result_head->next;
        
    }
    putchar('\n');
    getchar();
}
