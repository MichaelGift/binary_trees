#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if node have 0 or 2 children
 * @tree: Root node
 * Return: 1 if full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left && tree->right)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		if (left == 0 || right == 0)
			return (0);
		return (1);
	}
	else if (!tree->left && !tree->right)
		return (1);
	return (0);
}
