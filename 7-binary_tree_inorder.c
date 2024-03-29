#include "binary_trees.h"

/**
 * binary_tree_inorder - Finds the values of the tree in an
 * inorder fashion
 * @tree: Pointer to head node
 * @func: Function pointer
 * Return: void
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
