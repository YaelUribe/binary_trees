# 0x1D. C - Binary trees 🖨

![N|Solid](https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/07/Binary-Trees-in-C-normal-image01.jpg)

### *Binary Trees*
A binary tree is a type of data structure for storing data such as numbers in an organized way. Binary search trees allow binary search for fast lookup, addition and removal of data items, and can be used to implement dynamic sets and lookup tables.

## Concepts used ▶️

1. Root: A root is a node without a parent. In the above image, 50 is the root node.

2. Siblings: Siblings mean that nodes which have the same parent node. In the above image, 17 and 72 are siblings because they have 50 in common.

3. Internal Node: Internal Node means that a node which has at least a single child. In the above image, 17, 72, 12, 23, 54 are internal nodes.

4. External Node: External Node means that a node which has no children. It is also known as leaf. In the above image, 67 and 76 are external nodes.

5. Depth: You can calculate depth by the number of edges from node to the root of the tree.

6. Height: Height is the maximum depth of a node.

7. Level: Level of a node is equal to depth of the node+1.

8.  Inorder: In the case of binary search trees (BST), Inorder traversal gives nodes in non-decreasing order. To get nodes of BST in non-increasing order, a variation of Inorder traversal where Inorder traversal s reversed can be used.
 
9. Preorder: Preorder traversal is used to create a copy of the tree. Preorder traversal is also used to get prefix expression on an expression tree.

10. Postorder: Postorder traversal is used to delete the tree. Please see the question for the deletion of a tree for details. Postorder traversal is also useful to get the postfix expression of an expression tree.

## Created Functions
[0-binary_tree_node.c] :function that creates a binary tree node.

[1-binary_tree_insert_left.c] : function that inserts a node as the left-child of another node.

[2-binary_tree_insert_right.c] : function that inserts a node as the right-child of another node.

[3-binary_tree_delete.c] : function that deletes an entire binary tree.

[4-binary_tree_is_leaf.c] : function that checks if a node is a leaf.

[5-binary_tree_is_root.c] : function that checks if a given node is a root.

[6-binary_tree_preorder.c] : function that goes through a binary tree using pre-order traversal.

[7-binary_tree_inorder.c] : function that goes through a binary tree using in-order traversal.

[8-binary_tree_postorder.c] : function that goes through a binary tree using post-order traversal.

[9-binary_tree_height.c] : function that measures the height of a binary tree.

[10-binary_tree_depth.c] : function that measures the depth of a node in a binary tree.

[11-binary_tree_size.c ] :  function that measures the size of a binary tree.

[12-binary_tree_leaves.c] :  function that counts the leaves in a binary tree.

[13-binary_tree_nodes.c] : function that counts the nodes with at least 1 child in a binary tree.

[14-binary_tree_balance.c] : function that measures the balance factor of a binary tree.

[15-binary_tree_is_full.c] : function that checks if a binary tree is full.

[16-binary_tree_is_perfect.c] : function that checks if a binary tree is perfect.

[17-binary_tree_sibling.c] : function that finds the sibling of a node.

[18-binary_tree_uncle.c] : function that finds the uncle of a node.


**Free Software**

[![N|Solid](https://i.postimg.cc/FKh7hgp9/pngegg.png)](https://twitter.com/NeisseriaGi) <br>
Yael Uribe <br>
[![N|Solid](https://i.postimg.cc/FKh7hgp9/pngegg.png)](https://twitter.com/Lisethav55) <br>
Liseth Arias

[//]: # (These are reference links used in the body of this note. - )

   [AirBnB]: <https://www.airbnb.com.co/>
   [0-binary_tree_node.c]: <https://github.com/YaelUribe/binary_trees/blob/master/0-binary_tree_node.c>
   [1-binary_tree_insert_left.c]: <https://github.com/YaelUribe/binary_trees/blob/master/1-binary_tree_insert_left.c>
   [2-binary_tree_insert_right.c]: <https://github.com/YaelUribe/binary_trees/blob/master/2-binary_tree_insert_right.c>
   [3-binary_tree_delete.c]: <https://github.com/YaelUribe/binary_trees/blob/master/3-binary_tree_delete.c>
   [4-binary_tree_is_leaf.c]: <https://github.com/YaelUribe/binary_trees/blob/master/4-binary_tree_is_leaf.c>
   [5-binary_tree_is_root.c]: <https://github.com/YaelUribe/binary_trees/blob/master/5-binary_tree_is_root.c>
   [6-binary_tree_preorder.c]: <https://github.com/YaelUribe/binary_trees/blob/master/6-binary_tree_preorder.c>
   [7-binary_tree_inorder.c]: <https://github.com/YaelUribe/binary_trees/blob/master/7-binary_tree_inorder.c>
   [8-binary_tree_postorder.c]: <https://github.com/YaelUribe/binary_trees/blob/master/8-binary_tree_postorder.c>
   [9-binary_tree_height.c]: <https://github.com/YaelUribe/binary_trees/blob/master/9-binary_tree_height.c>
   [10-binary_tree_depth.c]: <https://github.com/YaelUribe/binary_trees/blob/master/10-binary_tree_depth.c>
   [11-binary_tree_size.c ]: <https://github.com/YaelUribe/binary_trees/blob/master/11-binary_tree_size.c>
   [12-binary_tree_leaves.c]: <https://github.com/YaelUribe/binary_trees/blob/master/12-binary_tree_leaves.c>
   [13-binary_tree_nodes.c]: <https://github.com/YaelUribe/binary_trees/blob/master/13-binary_tree_nodes.c>
   [14-binary_tree_balance.c]: <https://github.com/YaelUribe/binary_trees/blob/master/14-binary_tree_balance.c>
   [15-binary_tree_is_full.c]: <https://github.com/YaelUribe/binary_trees/blob/master/15-binary_tree_is_full.c>
   [16-binary_tree_is_perfect.c]: <https://github.com/YaelUribe/binary_trees/blob/master/16-binary_tree_is_perfect.c>
   [17-binary_tree_sibling.c]: <https://github.com/YaelUribe/binary_trees/blob/master/17-binary_tree_sibling.c>
   [18-binary_tree_uncle.c]: <https://github.com/YaelUribe/binary_trees/blob/master/18-binary_tree_uncle.c>
