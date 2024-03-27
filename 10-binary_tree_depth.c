#include "binary_trees.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
/**
 * binary_tree_depth - depth of specified node from root
 * @tree: node to check the depth
 * Return: 0 is it is the root or number of depth
 * Email: brunookoth44@gmail.com
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
