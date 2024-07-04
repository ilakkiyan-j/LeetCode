class Solution {
    public ListNode mergeNodes(ListNode head) {
       
         ListNode ch=head.next;
         ListNode cur = ch;
         
        while(cur!=null){
            int sum=0;
            while(cur.val!=0){
                sum+=cur.val;
                cur=cur.next;
            }
            ch.val=sum;
            cur=cur.next;
            ch.next=cur;
            ch=ch.next;
        }
        return head.next;
    }
}
