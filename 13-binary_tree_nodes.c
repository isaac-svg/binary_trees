#include "binary_trees.h"

/**
 * binary_tree_nodes - Computes the number of nodes in
 *  a binary tree
 * @tree: Pointer to head node
 * Return: Number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count = 1;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
