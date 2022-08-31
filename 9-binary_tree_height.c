#include "binary_trees.h"

#define MAX(A, B) (((A) < (B)) ? (B) : (A))

/**
 * binary_tree_height - returns height of tree
 * @tree: pointer to tree root node
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	h_left = binary_tree_height(tree->left) + 1;
	h_right = binary_tree_height(tree->right) + 1;

	return (MAX(h_left, h_right));
}
