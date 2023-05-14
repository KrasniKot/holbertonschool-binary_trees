#include "binary_trees.h"

/**
 * binary_tree_height - meassures the height of a binary tree.
 * @tree: pointer to the tree's root node.
 * Return:height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (!tree)
		return (0);

	lh = tree->left ? 1 + binary_tree_height(tree->left) : +0;
	rh = tree->right ? 1 + binary_tree_height(tree->right) : +0;

	return ((lh > rh) ? lh : rh);

}
