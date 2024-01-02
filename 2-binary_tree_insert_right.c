#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node at the right of a parent
 * node
 * @parent: pointer to the parent node
 * @value: value of the node
 * Returns: pointer to new node on success otherwise NULL  
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value){

    if (parent == NULL){
        return (NULL);
    }

    binary_tree_t *node = binary_tree_node(parent, value);

    if (node == NULL)
    {
        return (NULL);
    }

    if (parent->right != NULL)
    {
        binary_tree_t *oldNode = parent->right;
        parent->right = node;
        oldNode->parent = node;
        node->right = oldNode;
    }
    else
    {
        parent->right = node; 
    }

    return (node);
}