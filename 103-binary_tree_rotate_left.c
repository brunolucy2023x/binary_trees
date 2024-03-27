#include "binary_trees.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
/**
 * binary_tree_rotate_left - Function that  rotates left the binary tree.
 * @tree: The root node of the three
 * Return: Pointer node of the new node
 * Email: brunookoth44@gmail.com
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot;

	if (tree == NULL || tree->right == NULL)
	{
		return (NULL);
	}
	pivot = tree->right;
	tree->right = pivot->left;
	if (pivot->left != NULL)
	{
		pivot->left->parent = tree;
	}
	pivot->left = tree;
	pivot->parent = tree->parent;
	tree->parent = pivot;
	return (pivot);
}
