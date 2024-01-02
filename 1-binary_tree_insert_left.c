#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a new node at the left of a parent
 * node
 * @parent: pointer to the parent node
 * @value: value of the node
 * Returns: pointer to new node on success otherwise NULL  
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

    if (parent == NULL) {
        return NULL;  // Cannot insert if parent is NULL
    }

    binary_tree_t *node =  binary_tree_node(parent, value);

    if (node == NULL)
    {
        return (NULL);
    }

   if (parent->left != NULL)
   {
        binary_tree_t * oldNode = parent->left;
        parent->left = node;
        oldNode->parent = node;
        node->left = oldNode;
   }
   else
   {
        parent->left =  node;
   }



    return (node);


}