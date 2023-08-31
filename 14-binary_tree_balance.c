#include "binary_trees.h"

/**
 * binary_tree_height - Calculate the height of a binary tree.
 * @tree: Pointer to the root node.
 * Return: 0 if tree is NULL, height of the tree otherwise.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftheight, rightheight;

	if (tree == NULL)
		return (0);

	leftheight = binary_tree_height(tree->left);
	rightheight = binary_tree_height(tree->right);

	return (((leftheight > rightheight) ? leftheight : rightheight) + 1);
}

/**
 * binary_tree_balance - Measure the balance factor of a binary tree.
 * @tree: Pointer to the root node.
 * Return: 0 if tree is NULL, balance factor otherwise.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftheight, rightheight;

	if (tree == NULL)
		return (0);

	leftheight = (int)binary_tree_height(tree->left);
	rightheight = (int)binary_tree_height(tree->right);

	return (leftheight - rightheight);
}
