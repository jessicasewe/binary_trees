#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node: function that creates the binary tree node
 * @parent: A pointer to the parent node to create
 * @value: The value to put in the new node
 *
 * Return: Error occurs - NULL
 * else - a pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;
	
	new_tree = malloc(sizeof(binary_tree_t));
	if (new_tree == NULL)
		return (NULL);
	
	new_tree->n = value;
	new_tree->parent = parent;
	new_tree->left = NULL;
	new_tree->right = NULL;

	return (new_tree);
}
