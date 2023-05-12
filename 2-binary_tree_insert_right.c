#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node at the right of the parent.
 * @parent: parent.
 * @value: value.
 * Return: new node, NULL if it fails.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new = binary_tree_node(parent, value);

    if (!parent)
	{
		if (new)
			free(new);
		return (NULL);
	}

	if (parent->right)
	{
		new->right = parent->right;
		new->right->parent = new;
	}
	parent->right = new;

	return (new);
}