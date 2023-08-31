#include "binary_trees.h"

/**
 * binary_tree_depth - Measures depth of a node.
 * @tree: Pointer to the node to measure the depth.
 * Return: Depth of the node. If tree is NULL, return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (tree ? 1 + binary_tree_depth(tree->parent) : 0);
}
