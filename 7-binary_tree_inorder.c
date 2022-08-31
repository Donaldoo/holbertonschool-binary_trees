#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_inorder - Goes through the tree in preorder and prints n
 * @tree: pointer to head of tree
 * @func: pointer to print function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
