#include "binary_trees.h"

/**
 * void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int)): function that
 * goes through a binary tree using the  in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: tree or func is NULL, do nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if(tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
