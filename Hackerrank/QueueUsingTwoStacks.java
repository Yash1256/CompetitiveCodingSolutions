import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Queue<Integer> q = new Queue<Integer>();

        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();

        for (int i = 0; i < n; i++) {
            int opt = scan.nextInt();

            if (opt == 1) q.enqueue(scan.nextInt());
            else if (opt == 2) q.dequeue();
            else if (opt == 3) System.out.println(q.peek());
        }

        scan.close();
    }
    
    public static class Queue<Integer> {
        private Stack<Integer> s1 = new Stack();
        private Stack<Integer> s2 = new Stack();
        
        public void enqueue(Integer num) {
            s1.push(num);
        }
        
        public Integer dequeue() {
            if (s1.size() + s2.size() == 0) return null;
            if (s2.isEmpty()) shiftStacks();
            return s2.pop();
        }
        
        public Integer peek() {
            if (s1.size() + s2.size() == 0) return null;
            if (s2.isEmpty()) shiftStacks();
            return s2.peek();
        }
        
        private void shiftStacks() {
            if (s2.isEmpty()) 
                while(!s1.isEmpty()) 
                    s2.push(s1.pop());
        }
    }
}
