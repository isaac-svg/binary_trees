#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of
 * a binary tree
 * @tree: Pointer to the root node
 * Return: Balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);


	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}


/**
 * binary_tree_height - Determines the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
