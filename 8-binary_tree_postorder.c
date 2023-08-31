#include "binary_trees.h"

/**
 * binary_tree_postorder - Perform post-order traversal on a binary tree.
 * @tree: Pointer to the root node of the tree.
 * @func: Pointer to a function to call for each node.
 *
 * Description: The function goes through the binary tree using
 * post-order traversal and calls the specified function on each node.
 * The value of each node is passed as a parameter to the function.
 * If tree or func is NULL, do nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
