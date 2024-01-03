#include "binary_trees.h"

/**
 * binary_tree_depth - Computes the depth
 * @tree: Pointer to head node
 * Return: Depth of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
