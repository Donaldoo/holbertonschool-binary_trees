#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_preorder - Goes through the tree in preorder and prints n
 * @tree: pointer to head of tree
 * @func: pointer to print function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
