#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: node.
 * Return: number of nodes with a least...
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t cs = 0;

	if (!tree)
		return (0);

	cs = (tree->left || tree->right) ? +1 : 0;
	cs += binary_tree_nodes(tree->left);
	cs += binary_tree_nodes(tree->right);

	return (cs);
}
