#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a Binary tree is full
 * @tree: Pointer to the root
 * Returns: 1 if full otherwise 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL) {
        return (1);  
    }

    if (tree->left == NULL && tree->right == NULL) {
        return (1);
    }

    if (tree->left && tree->right && !tree->left->left && !tree->left->right && 
      !tree->right->left && !tree->right->right) {
        return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
    }

    return (0);
}
