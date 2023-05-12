#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates an left child node.
 * @parent: parent.
 * @value: value to be stored into the new node.
 * Return: the new node, NULL if it fails.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = binary_tree_node(parent, value);

	if (!parent)
	{
		if (new)
			free(new);
		return (NULL);
	}

	if (parent->left)
	{
		new->left = parent->left;
		new->left->parent = new;
	}

	parent->left = new;

	return (new);
}
