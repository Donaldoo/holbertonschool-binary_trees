#include "binary_trees.h"
#define MAX(A, B) (((A) >= (B)) ? (A) : (B))

/**
 * binary_tree_balance - finds the balance of a binary tree
 * @tree: pointer to the root node
 *
 * Return: balance number, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) -
	binary_tree_height(tree->right));
}
/**
 * binary_tree_height - returns height of tree
 * @tree: pointer to tree root node
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL)
		return (0);
	h_left = binary_tree_height(tree->left) + 1;
	h_right = binary_tree_height(tree->right) + 1;

	return (MAX(h_left, h_right));
}
