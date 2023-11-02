#include "binary_trees.h"

/**
 * size_t binary_tree_size(const binary_tree_t *tree): function that measures the size of binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 *  Return: 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, r_right = 0, l_left = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l_left = binary_tree_size(tree->left);
		r_right = binary_tree_size(tree->right);
		size = r_right + l_left + 1;
	}

	return (size);
}
