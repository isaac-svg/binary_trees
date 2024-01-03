#include "binary_trees.h"

/**
 * binary_tree_depth - Computes the depth
 * @tree: Pointer to head node
 * Return: Depth of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
