#include "binary_trees.h"
#define MAX(A, B) (((A) >= (B)) ? (A) : (B))
size_t tree_height(const binary_tree_t *tree);
/**
 * binary_tree_is_full - finds if binary tree is full
 * @tree: pointer to the root node
 *
 * Return: 1 if tree is it is, 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	return (0);

}
