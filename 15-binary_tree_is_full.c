#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a Binary tree is full
 * @tree: Pointer to the root
 * Return: 1 if full otherwise 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full(tree));
}






/**
 * is_full - Checks if a binary tree is full recursively.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is not full, 0
 *         Otherwise, 1.
 */
int is_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full(tree->left) == 0 ||
		    is_full(tree->right) == 0)
			return (0);
	}
	return (1);
}

