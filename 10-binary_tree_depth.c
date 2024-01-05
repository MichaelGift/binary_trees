#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth/branch level a node is on.
 * @tree: Target node.
 * Return: depth else 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
