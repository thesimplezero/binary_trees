#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child
 * of another in a binary tree.
 * @parent: Pointer to the node to insert the left-child in.
 * @value: Value to store in the new node.
 *
 * Return: A pointer to the new node, or NULL on failure or if parent is NULL.
 *
 * Description: If the parent already has a left-child, the new
 * node takes its place,
 * and the old left-child becomes the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (parent == NULL)
		return (NULL);

	new_left = binary_tree_node(parent, value);
	if (new_left == NULL)
		return (NULL);

	if (parent->left)
	{
		new_left->left = parent->left;
		parent->left->parent = new_left;
	}
	parent->left = new_left;

	return (new_left);
}
