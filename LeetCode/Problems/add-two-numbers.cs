/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2)
    {
        int a = l1.val,
            b = l2.val,
            digit = a + b,
            add = 0;

        if (digit >= 10)
        {
            digit %= 10;
            add = 1;
        }
        var l3 = new ListNode(digit);
        var tail = l3;
        for (;;)
        {
            l1 = l1?.next;
            l2 = l2?.next;

            a = l1?.val ?? 0;
            b = l2?.val ?? 0;

            if (l2 == null && l1 == null)
            {
                if (add != 0)
                {
                    tail.next = new ListNode(add);
                }
                return l3;
            }

            digit = a + b + add;
            if (digit >= 10)
            {
                digit %= 10;
                add = 1;
            }
            else
            {
                add = 0;
            }
            tail.next = new ListNode(digit);
            tail = tail.next;
        }
    }
}