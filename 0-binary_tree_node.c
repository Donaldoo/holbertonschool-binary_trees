#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - called from main
 * @parent: pointer to parent node
 * @value: integer value
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
	{
		new_node->parent = NULL;
		new_node->left = NULL;
		new_node->right = NULL;
		new_node->n = value;
	}
	else
	{
		if (parent->left == NULL)
			parent->left = new_node;
		else if (parent->right == NULL)
			parent->right = new_node;
		else
			return (NULL);
	}
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	return (new_node);
}
