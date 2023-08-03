#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a given node.
 * @tree: binary tree node to be checked.
 *
 * Return: returns the depth of the node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *temp;

	if (tree == NULL)
		return (0);
	temp = tree;
	while (temp != NULL)
	{
		if (temp->parent == NULL)
			break;
		depth++;
		temp = temp->parent;
	}
	return (depth);
}
