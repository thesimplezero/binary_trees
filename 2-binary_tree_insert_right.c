#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a right child into a binary tree
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to store in the new right child
 * Return: Pointer to the new right child, or NULL on failure or
 * if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (!parent)
		return (NULL);

	right_child = malloc(sizeof(binary_tree_t));
	if (!right_child)
		return (NULL);

	right_child->parent = parent;
	right_child->n = value;
	right_child->left = NULL;
	right_child->right = parent->right;

	parent->right = right_child;

	if (right_child->right)
		right_child->right->parent = right_child;

	return (right_child);
}
