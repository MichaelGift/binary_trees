#include "binary_trees.h"
/**
 * binary_tree_insert_left - Create or update left-child node
 * of a target 'parent' node.
 * @parent: Target note to insert left-child..
 * @value: Value of the left-child.
 *
 * Return: Pointer to the new left-child else NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *l_child;

	if (parent == NULL)
		return (NULL);

	l_child = binary_tree_node(parent, value);
	if (l_child == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		l_child->left = parent->left;
		parent->left->parent = l_child;
	}
	parent->left = l_child;

	return (l_child);
}
