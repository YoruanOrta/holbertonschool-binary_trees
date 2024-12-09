#include "binary_trees.h"

/**
 * binary_tree_node - Write a function that creates a binary tree node.
 * @n: Stores the integer value
 * @parent: Points to the parent node (can be NULL if it's the root).
 * @left: Points to the left child (initialized to NULL).
 * @right: Points to the right child (initialized to NULL).
 *
 * Return: A pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
