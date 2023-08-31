#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a left child into a binary tree
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to store in the new left child
 * Return: Pointer to the new left child, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *left_child;

    if (!parent)
        return (NULL);

    left_child = malloc(sizeof(binary_tree_t));
    if (!left_child)
        return (NULL);

    left_child->parent = parent;
    left_child->n = value;
    left_child->left = parent->left;
    left_child->right = NULL;

    if (left_child->left)
        left_child->left->parent = left_child;

    parent->left = left_child;

    return (left_child);
}
