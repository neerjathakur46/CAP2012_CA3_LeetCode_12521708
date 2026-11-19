class Solution {
struct compare {
bool operator()(ListNode* a, ListNode* b) { return a->val > b->val; }
};
public:
ListNode* mergeKLists(vector<ListNode*>& lists) {
priority_queue<ListNode*, vector<ListNode*>, compare> pq;
for (auto l : lists) if (l) pq.push(l);
ListNode dummy(0); ListNode* tail = &dummy;
while (!pq.empty()) {
ListNode* node = pq.top(); pq.pop();
tail->next = node; tail = tail->next;
if (node->next) pq.push(node->next);
}
return dummy.next;
}
};
