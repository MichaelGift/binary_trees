#include "binary_trees.h"

/**
 * binary_tree_size - Measures the number of nodes including target node.
 * @tree: Starting node.
 * Return: No child nodes + starting node.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
