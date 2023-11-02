#include "binary_trees.h"

/**
 * size_t binary_tree_height(const binary_tree_t *tree): function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to masure the heigh
 *
 * Return: 0 if tree is Null
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
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
                        l_left = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
                        r_right = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
                }
                return ((l_left > r_right) ? l_left : r_right);
        }
}

/**
 * int binary_tree_balance(const binary_tree_t *tree): function that measures the balance factor 
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL
 *
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->left));
		total = left - right;
	}
	return (total);
}
