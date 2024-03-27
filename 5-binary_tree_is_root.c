#include "binary_trees.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
/**
 * binary_tree_is_root - Function that checks if a node is a root
 * @node: Node to check
 * Return: 0 if is not a root 1 if it is
 * Email: brunookoth44@gmail.com
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
