This issue aims to add a coding problem titled **"Find Duplicate Integer"** along with its solution to the repository.



### Problem Statement:

Given a Linked List Representation of Complete Binary Tree. Your task is to construct the Binary tree from the given LinkedList and return the root of the tree.
The result will be judged by printing the level order traversal of the Binary tree. 
Note: The complete binary tree is represented as a linked list in a way where if the root node is stored at position `i`, its left, and right children are stored at position `2*i+1`, and` 2*i+2 `respectively. H is the height of the tree and this space is used implicitly for the recursion stack.

### Example 1:
- **Input:** `list = 1->2->3->4->5`
- **Output:** ` 1 2 3 4 5`

### Example 2:
- **Input:** `list = 5->4->3->2->1`
- **Output:** `5 4 3 2 1`

- ### Expected Time Complexity: 
- O(n).
- ### Expected Auxiliary Space: 
- O(n).
### Constraints:
1 <= numbers of nodes <= 106
1 <= node->data <= 104

---