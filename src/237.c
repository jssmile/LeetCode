
void deleteNode(struct ListNode* node) {

    struct ListNode* ptr = node -> next;

    node->val = ptr-> val;

    node->next = ptr->next;

    free(ptr);

}
