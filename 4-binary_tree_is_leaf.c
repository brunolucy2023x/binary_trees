#include "binary_trees.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
/**
 * binary_tree_is_leaf - know if a node is a leaf, that means that the node
 * does not have any child neither left nor right
 * @node: node to study
 * Return: 1 if it is a leaf or 0 if it is not
 * Email: brunookoth44@gmail.com
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
