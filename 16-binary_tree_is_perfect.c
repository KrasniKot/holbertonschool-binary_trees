#include "binary_trees.h"
/**
 * tree_is_perfect - complementary of binary_tree_is_perfect.
 * @tree: pointer to the tree's first node.
 * Return: 1 if it is perfect.
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (rh == lh && lh && rh)
		return (1);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		lh = 1 + tree_is_perfect(tree->left);
		rh = 1 + tree_is_perfect(tree->right);
		if (rh == lh && lh && rh)
			return (1);

	}

	return (0);
}

/**
 * binary_tree_is_perfect - checks if a tree is perfect.
 * @tree: pointer to the first node of the tree.
 * Return: 1 if it is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree_is_perfect(tree))
		return (1);

	return (0);
}
