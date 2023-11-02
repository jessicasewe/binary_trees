#include "binary_trees.h"

/**
 * size_t binary_tree_height(const binary_tree_t *tree): function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to masure the heigh
 *
 * Return: 0 if tree is Null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_left = 0;
	size_t r_right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			r_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((l_left > r_right) ? l_left : r_right);
	}
}	
