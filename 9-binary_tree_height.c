#include "binary_trees.h"

/**
 * hcnter - meassures the height of a binary tree.
 * @tree: pointer to the tree's root node.
 * @height: height counter.
 * Return: @height.
 */
int hcnter(const binary_tree_t *tree, int height)
{
	if (!tree)
		return (0);
	if (tree->left)
		hcnter(tree->left, height++);
	if (tree->right)
		hcnter(tree->right, height++);
	return (height);
}

/**
 * binary_tree_height - calls to hcnter.
 * @tree: pointer to the tree's root node..
 * Return: hcnter.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (hcnter(tree, 0));
}
