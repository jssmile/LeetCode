struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct LsitNode* current = head;
    struct ListNode* next;

    while(current != NULL) {
    	next = current->next;
	current->next = prev;
	prev = current;
	current = next;
    }

    head = prev;
    return head;
}
