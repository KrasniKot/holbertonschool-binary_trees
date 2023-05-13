#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree in post-order.
 * @tree: pointer to the root node of the binary tree.
 * @func: function to be called for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree->right)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	func(tree->n);

}
