#include "binary_trees.h"

/**
 * size_t binary_tree_depth(const binary_tree_t *tree): function that measures the depth of a node in binary tree
 * @tree: pointer ti the node to measure the depth
 * Return: 0 if tree NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
