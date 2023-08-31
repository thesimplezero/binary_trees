#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node.
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Node has no children. */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If node has two children, continue checking recursively. */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	/* If node has only one child, it's not full. */
	return (0);
}
