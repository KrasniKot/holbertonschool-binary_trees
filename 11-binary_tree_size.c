#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of @tree.
 * @tree: pointer to node to measure.
 * Return: size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t ls = 0, rs = 0;

	if (!tree)
		return (0);

	ls += binary_tree_size(tree->left);
	rs += binary_tree_size(tree->right);
	return (ls + rs + 1);
}
