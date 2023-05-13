#include "binary_trees.h"

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left)
		binary_tree_inorder(tree->left, func);

	if (tree->right)
		binary_tree_inorder(tree->right, func);
	func(tree->n);

}
