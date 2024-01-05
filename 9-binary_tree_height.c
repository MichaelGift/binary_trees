#include "binary_trees.h"

/**
 * binary_tree_height - Measures length of each branch
 * returns the longest.
 * @tree: Root node
 * Return: tree height else 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;
	
		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
