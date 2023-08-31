#include "binary_trees.h"

/**
 * binary_tree_preorder - Perform pre-order traversal on a binary tree.
 * @tree: Pointer to the root node of the tree.
 * @func: Pointer to a function to call for each node.
 *
 * Description: The function goes through the binary tree using
 * pre-order traversal and calls the specified function on each node.
 * The value of each node is passed as a parameter to the function.
 * If tree or func is NULL, do nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Call the function on the current node */
	func(tree->n);

	/* Recur on the left subtree */
	binary_tree_preorder(tree->left, func);

	/* Recur on the right subtree */
	binary_tree_preorder(tree->right, func);
}
