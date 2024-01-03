#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to root node
 * Return: 0 if not perfect else 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int height = 0;
	int nodes = 0;

	return (binary_tree_is_perfect_helper(tree, &height, &nodes));
}


/**
 * binary_tree_is_perfect_helper - Checks if a binary tree is perfect
 * @tree: Pointer to root node
 * @height: height of the tree
 * @nodes: pointer to the nodes
 * Return: 0 if not perfect else 1
 */

int binary_tree_is_perfect_helper(const binary_tree_t *tree, int *height,
		int *nodes)
{
	if (tree == NULL)
	{
		*height = 0;
		*nodes = 0;
		return (1);
	}
	int left_height = 0, right_height = 0;
	int left_nodes = 0, right_nodes = 0;

	if (!binary_tree_is_perfect_helper(tree->left, &left_height,
				&left_nodes) || !binary_tree_is_perfect_helper(tree->right, &right_height,
		&right_nodes))
		return (0);

	if (left_height != right_height || left_nodes != right_nodes)
		return (0);

	*height = 1 + left_height;
	*nodes = 1 + left_nodes + right_nodes;
	return (*nodes == (1 << *height) - 1);

}
