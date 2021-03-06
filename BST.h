#include <cstdlib>
#include <stdio.h>
#ifndef __BSTREE__
#define __BSTREE__

typedef unsigned int uint;

typedef struct BSTree{
	uint key;
	bool is_visited;
	struct BSTree* parent;
	struct BSTree* lchild;
	struct BSTree* rchild;
}BSTree;

typedef struct Result{
	bool find1;
	bool find2;
	BSTree* p_find;
}Result;

void InOrder_Traverse_R(BSTree*);
void InOrder_Traverse_I(BSTree* root);
void InOrder_Traverse_I2(BSTree* root);
void PreOrder_Traverse_I(BSTree* root);
void PreOrder_Traverse_I2(BSTree* root);
void PostOrder_Traverse_I(BSTree* root);
void PostOrder_Traverse_I2(BSTree* root);
void PostOrder_Traverse_I3(BSTree* root);

BSTree* Search_BST_R(BSTree*, unsigned int);
BSTree* Search_BST_I(BSTree*, unsigned int);
BSTree* MAX_BST(BSTree*);
BSTree* MIN_BST(BSTree*);
BSTree* PRE_BST(BSTree*);
void PRE_BST(BSTree*, uint);
BSTree* SUCC_BST(BSTree*);
void SUCC_BST(BSTree*, uint);

/* C-Version */
BSTree* Search_nearest_bigger(BSTree*,float);
/* C++ Version */
//template<class T>
//void Search_nearest_bigger(BSTree** root, T value);

void Insert_BST(BSTree** root, uint value);
//void Delete_BST_my(BSTree* root, BSTree* node);
//BSTree* Delete_BST(BSTree** root, BSTree* node);
void Delete_BST(BSTree* &Root, uint key);

void level_print(BSTree* root, int N);
void zigzag_print(BSTree* root);
void mirror_tree(BSTree* root);

BSTree* LCA(BSTree* root, uint key1, uint key2);
Result LCACore(BSTree* root, uint key1, uint key2);

#endif
