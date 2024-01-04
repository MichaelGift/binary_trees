#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node has no children/is a leaf.
 * @node: Target node
 * Return: 1 if True else 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
