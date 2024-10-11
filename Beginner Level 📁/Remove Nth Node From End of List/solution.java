class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        int len = 0;
        ListNode temp = head;
        
        while(temp != null) {
            len++;
            temp = temp.next;
        }
        
        temp = head;
        ListNode prev = null;
        int pos = len - n;
        
        if(pos == 0) return head.next;

        for(int i = 0; i < pos; i++) {
            prev = temp;
            temp = temp.next;
        }
        
        prev.next = temp.next;
        
        temp = null;
        
        return head;
    }
}
