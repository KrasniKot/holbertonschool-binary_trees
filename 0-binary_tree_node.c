#include "binary_trees.h"

/**
 * binary_tree_node - creates a new node.
 * @parent: parent node.
 * @value: value to store in the node.
 * Return: new node, or NULL if it fails.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;

	return (new);
}