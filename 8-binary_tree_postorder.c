#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_postorder - Goes through the tree in preorder and prints n
 * @tree: pointer to head of tree
 * @func: pointer to print function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
