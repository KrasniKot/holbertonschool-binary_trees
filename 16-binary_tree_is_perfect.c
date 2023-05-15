#include "binary_trees.h"


/**
 * _binary_tree_height - meassures the height of a binary tree.
 * @tree: pointer to the tree's root node.
 * Return:height.
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (!tree)
		return (0);

	lh = tree->left ? 1 + _binary_tree_height(tree->left) : +1;
	rh = tree->right ? 1 + _binary_tree_height(tree->right) : +1;

	return ((lh >= rh) ? lh : rh);

}

/**
 * binary_tree_balance - measures the balance of a binary tree.
 * @tree: pointer to the root node of the tree.
 * Return: balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: pointer to the tree node to be checked.
 * Return: 1 if it is full, otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree && !tree->right && !tree->left)
		return (1);

	if (tree && (tree->left) && (tree->right))
		return (1 && binary_tree_is_full(tree->left)
				&& binary_tree_is_full(tree->right));
	return (0);
}

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
