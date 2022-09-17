# C - Binary trees :evergreen_tree:

![1_CMGFtehu01ZEBgzHG71sMg](https://user-images.githubusercontent.com/105612348/190860383-a441c00c-73df-4a5c-8e6e-debe74c2f77d.png)

A binary tree is a tree data structure in which each parent node can have at most two children. </br>
Each node of a binary tree consists of three items:
* Data
* Pointer to the left child
* Pointer to the right child

### Types of Binary Trees:
* Full Binary Tree - When every parent node has either two or no children.
* Perfect Binary Tree - When every parent node has exactly two child nodes and all the leaf nodes are at the same level.
* Complete Binary Tree - Every level must be completely filled, all the leaf elements must lean towards the left, the last leaf element might not have a right sibling.
* Degenerate Tree - When the tree has a single child either left or right.
* Balanced Binary Tree - When the difference between the height of the left and the right subtree for each node is either 0 or 1.

### Binary Tree Representation
```
struct node
{
    int data;
    struct *node left;
    struct *node right;
};
```


## Resources 📋

* [Binary tree (note the first line: Not to be confused with B-tree.)](https://en.wikipedia.org/wiki/Binary_tree)
* [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
* [Tree Traversal](https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm)
* [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
* [Data structures: Binary Tree](https://www.youtube.com/watch?v=H5JubkIy_p8)



## Files :open_file_folder:


<!-- ⛔️ MD-MAGIC-EXAMPLE:START (TOC:collapse=true&collapseText=Click to expand) -->
<details>
<summary>Click to expand</summary>



File names | Description
--- | ---
[0-binary_tree_node.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/0-binary_tree_node.c) | Function that creates a binary tree node.
[1-binary_tree_insert_left.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/1-binary_tree_insert_left.c) | Function that inserts a node as the left-child of another node.
[2-binary_tree_insert_right.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/2-binary_tree_insert_right.c) | Function that inserts a node as the right-child of another node.
[3-binary_tree_delete.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/3-binary_tree_delete.c) | Function that deletes an entire binary tree.
[4-binary_tree_is_leaf.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/4-binary_tree_is_leaf.c) | Funciton that checks if a node is a leaf.
[5-binary_tree_is_root.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/5-binary_tree_is_root.c) | Function that checks if a given node is a root.
[6-binary_tree_preorder.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/6-binary_tree_preorder.c) | Function that goes through a binary tree using pre-order traversal.
[7-binary_tree_inorder.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/7-binary_tree_inorder.c) | Function that goes through a binary tree using in-order traversal.
[8-binary_tree_postorder.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/8-binary_tree_postorder.c) | Function that goes through a binary tree using post-order traversal.
[9-binary_tree_height.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/9-binary_tree_height.c) | Function that measures the height of a binary tree.
[10-binary_tree_depth.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/10-binary_tree_depth.c) | Function that measures the depth of a node in a binary tree.
[11-binary_tree_size.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/11-binary_tree_size.c) | Funciton that measures the size of a binary tree.
[12-binary_tree_leaves.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/12-binary_tree_leaves.c) | Function that counts the leaves in a binary tree.
[13-binary_tree_nodes.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/13-binary_tree_nodes.c) | Function that counts the nodes with at least 1 child in a binary tree.
[14-binary_tree_balance.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/14-binary_tree_balance.c) | Function that measures the balance factor of a binary tree.
[15-binary_tree_is_full.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/15-binary_tree_is_full.c) | Function that checks if a binary tree is full.
[16-binary_tree_is_perfect.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/16-binary_tree_is_perfect.c) | Function that checks if a binary tree is perfect.
[17-binary_tree_sibling.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/17-binary_tree_sibling.c) | Function that finds the sibling of a node.
[18-binary_tree_uncle.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/18-binary_tree_uncle.c) | Function that finds the uncle of a node.
[binary_tree_print.c](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/binary_tree_print.c) | Function to print binary tree.
[binary_trees.h](https://github.com/Donaldoo/holbertonschool-binary_trees/blob/main/binary_trees.h) | Header file containing all functions prototypes and structures.




</details>
<!-- ⛔️ MD-MAGIC-EXAMPLE:END -->








