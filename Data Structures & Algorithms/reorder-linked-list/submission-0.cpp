
class Solution {
public:
    void reorderList(ListNode* head) {
            if (!head || !head->next) return;

                    // 1. Find the middle of the linked list
                            ListNode* slow = head;
                                    ListNode* fast = head;

                                            while (fast->next && fast->next->next) {
                                                        slow = slow->next;
                                                                    fast = fast->next->next;
                                                                            }

                                                                                    // 2. Reverse the second half
                                                                                            ListNode* prev = nullptr;
                                                                                                    ListNode* curr = slow->next;
                                                                                                            slow->next = nullptr;

                                                                                                                    while (curr) {
                                                                                                                                ListNode* nextNode = curr->next;
                                                                                                                                            curr->next = prev;
                                                                                                                                                        prev = curr;
                                                                                                                                                                    curr = nextNode;
                                                                                                                                                                            }

                                                                                                                                                                                    // 3. Merge the two halves alternately
                                                                                                                                                                                            ListNode* first = head;
                                                                                                                                                                                                    ListNode* second = prev;

                                                                                                                                                                                                            while (second) {
                                                                                                                                                                                                                        ListNode* temp1 = first->next;
                                                                                                                                                                                                                                    ListNode* temp2 = second->next;

                                                                                                                                                                                                                                                first->next = second;
                                                                                                                                                                                                                                                            second->next = temp1;

                                                                                                                                                                                                                                                                        first = temp1;
                                                                                                                                                                                                                                                                                    second = temp2;
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                };
                                                                                                                                                                                                                                                                                                
