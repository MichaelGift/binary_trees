#include "binary_trees.h"

/**
 * binary_tree_insert_right - Create or update right-child node of
 *                            a target node.
 * @parent: Target node.
 * @value: Value of new node..
 *
 * Return: Pointer to new right node else NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *r_node;

	if (parent == NULL)
		return (NULL);

	r_node = binary_tree_node(parent, value);
	if (r_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		r_node->right = parent->right;
		parent->right->parent = r_node;
	}
	parent->right = r_node;

	return (r_node);
}
