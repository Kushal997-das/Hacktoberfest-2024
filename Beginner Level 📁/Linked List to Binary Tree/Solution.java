//the drivers code--------------------------------------
import java.util.*;

class Tree {
    int data;
    Tree left;
    Tree right;

    Tree(int d) {
        data = d;
        left = null;
        right = null;
    }
}

class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}
//------------------------------------------------------

class Solution {
    public Tree convert(Node head, Tree node) {
         if (head == null) {
            return null;
        }

        Tree root = new Tree(head.data);
        Queue<Tree> queue = new LinkedList<>();
        queue.add(root);

        head = head.next;

        while (head != null) {

            Tree parent = queue.poll();
            Tree leftChild = new Tree(head.data);
            parent.left = leftChild;
            queue.add(leftChild);
            head = head.next;

            if (head == null) {
                break;
            }

            Tree rightChild = new Tree(head.data);
            parent.right = rightChild;
            queue.add(rightChild);
            head = head.next;
        }

        return root;
    }
}