#include "binary_trees.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
/**
 * binary_tree_preorder - print elements of tree using pre-order traversal
 * @tree: tree to go through
 * @func: function to use
 * Return: Nothing
 * Email: brunookoth44@gmail.com
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
