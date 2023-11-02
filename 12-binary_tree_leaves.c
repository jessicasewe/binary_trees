#include "binary_trees.h"

/**
 * size_t binary_tree_leaves(const binary_tree_t *tree): function that counts the leaves
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, l_left = 0, r_right = 0;

	if(tree == NULL)
	{
		return (0);
	}
	else
	{
		l_left = binary_tree_leaves(tree->left);
		r_right = binary_tree_leaves(tree->right);
		leaf = l_left + r_right;
		return ((!l_left && !r_right) ? leaf + 1 : leaf + 0);
	}
}
