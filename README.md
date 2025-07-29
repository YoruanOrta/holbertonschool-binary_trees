# Binary Trees - Holberton School

This repository contains a comprehensive implementation of binary tree data structures and algorithms developed as a team project at Holberton School. The project covers fundamental to advanced binary tree concepts, including traversal algorithms, tree properties, and specialized tree types.

## 📋 Description

This project includes:
- Binary tree creation and manipulation
- Tree traversal algorithms (inorder, preorder, postorder)
- Tree property analysis (height, depth, balance)
- Node insertion and deletion operations
- Tree validation and type checking
- Advanced tree operations and transformations
- Memory management for tree structures

## 👥 Team Project

**Collaborative Development**  
This project was completed as a team effort.

### Authors
- **Yoruan Orta** - [@YoruanOrta](https://github.com/YoruanOrta)
- **Joan Martinez** - [@Joan938](https://github.com/Joan938)

## 🗂️ Project Structure

```
holbertonschool-binary_trees/
├── binary_trees.h              # Main header file with structures and prototypes
├── binary_tree_print.c         # Tree visualization function
├── Basic Operations (Tasks 0-9):
│   ├── 0-binary_tree_node.c        # Create a binary tree node
│   ├── 1-binary_tree_insert_left.c # Insert node as left child
│   ├── 2-binary_tree_insert_right.c # Insert node as right child
│   ├── 3-binary_tree_delete.c      # Delete entire tree
│   ├── 4-binary_tree_is_leaf.c     # Check if node is a leaf
│   ├── 5-binary_tree_is_root.c     # Check if node is root
│   ├── 6-binary_tree_preorder.c    # Preorder traversal
│   ├── 7-binary_tree_inorder.c     # Inorder traversal
│   ├── 8-binary_tree_postorder.c   # Postorder traversal
│   ├── 9-binary_tree_height.c      # Calculate tree height
├── Advanced Operations (Tasks 10-18):
│   ├── 10-binary_tree_depth.c      # Calculate node depth
│   ├── 11-binary_tree_size.c       # Calculate tree size
│   ├── 12-binary_tree_leaves.c     # Count leaf nodes
│   ├── 13-binary_tree_nodes.c      # Count internal nodes
│   ├── 14-binary_tree_balance.c    # Calculate balance factor
│   ├── 15-binary_tree_is_full.c    # Check if tree is full
│   ├── 16-binary_tree_is_perfect.c # Check if tree is perfect
│   ├── 17-binary_tree_sibling.c    # Find sibling node
│   ├── 18-binary_tree_uncle.c      # Find uncle node
└── README.md                   # Project documentation
```

## 🚀 Implemented Functions

### **Basic Tree Operations**
- `binary_tree_node()` - Creates a new binary tree node
- `binary_tree_insert_left()` - Inserts a node as left child
- `binary_tree_insert_right()` - Inserts a node as right child
- `binary_tree_delete()` - Deletes an entire binary tree

### **Tree Traversal Algorithms**
- `binary_tree_preorder()` - Preorder traversal (Root → Left → Right)
- `binary_tree_inorder()` - Inorder traversal (Left → Root → Right)
- `binary_tree_postorder()` - Postorder traversal (Left → Right → Root)

### **Tree Properties and Metrics**
- `binary_tree_height()` - Measures the height of a tree
- `binary_tree_depth()` - Measures the depth of a node
- `binary_tree_size()` - Counts the total number of nodes
- `binary_tree_leaves()` - Counts the number of leaf nodes
- `binary_tree_nodes()` - Counts nodes with at least one child

### **Tree Analysis Functions**
- `binary_tree_balance()` - Calculates the balance factor
- `binary_tree_is_full()` - Checks if tree is full (every node has 0 or 2 children)
- `binary_tree_is_perfect()` - Checks if tree is perfect (all leaves at same level)

### **Relationship Functions**
- `binary_tree_sibling()` - Finds the sibling of a node
- `binary_tree_uncle()` - Finds the uncle of a node

## 🛠️ Data Structure

### Binary Tree Node Structure
```c
/**
 * struct binary_tree_s - Binary tree node
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;
```

## ⚙️ Compilation and Usage

### Standard Compilation
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o binary_trees
```

### Example Usage
```c
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 128);
    
    binary_tree_print(root);
    
    printf("Height: %lu\n", binary_tree_height(root));
    printf("Size: %lu\n", binary_tree_size(root));
    printf("Is perfect: %d\n", binary_tree_is_perfect(root));
    
    binary_tree_delete(root);
    return (0);
}
```

## 🎯 Learning Objectives

- Understanding binary tree structure and properties
- Implementing tree traversal algorithms
- Calculating tree metrics (height, depth, size)
- Analyzing tree balance and type validation
- Managing memory for dynamic tree structures

## 👨‍💻 Authors

**Yoruan Orta & Joan Martinez**  
Repository: [holbertonschool-binary_trees](https://github.com/YoruanOrta/holbertonschool-binary_trees)

## 📄 License

This project is part of the Holberton School curriculum and is intended for educational purposes only.

---
⭐ **Holberton School** - Binary Trees Data Structure Project | 2025
