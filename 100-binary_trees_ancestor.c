#include "binary_trees.h"

/**
 * binary_trees_ancestor - Common ancestor for two nodes
 * @first: First node
 * @second: Second node
 * Return: Ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *pere, *mere;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	pere = first->parent;
	mere = second->parent;
	if (pere == NULL || first == mere || (!pere->parent && mere))
		return (binary_trees_ancestor(first, mere));
	else if (mere == NULL || pere == second || (!mere->parent && pere))
		return (binary_trees_ancestor(pere, second));
	return (binary_trees_ancestor(pere, mere));
}
