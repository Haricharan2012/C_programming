struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode *prevnode, *currnode;

    if (head != NULL)
    {
        prevnode = head;          // First node
        currnode = head->next;    // Second node
        head = head->next;        // Head also points to second node

        prevnode->next = NULL;    // First node becomes last

        while (head != NULL)
        {
            head = head->next;        // Save next node
            currnode->next = prevnode;// Reverse the link
            prevnode = currnode;      // Move prev forward
            currnode = head;          // Move current forward
        }

        head = prevnode;              // New head is the last node
    }

    return head;
}
