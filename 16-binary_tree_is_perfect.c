#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks is a biinary tree is perfect.
 * @tree: pointer to the root node of the tree.
 * Return: 1 if it is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_balance(tree))
		return (0);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
