#pragma once
#include <vector>

template<class ItemType>
class BST
{
private:
	ItemType m_value;
	BST * m_left;
	BST * m_right;

public:

	BST();
	virtual ~BST();
	bool insertNum(ItemType val);
	bool findNum(ItemType val);
	bool removeNum(ItemType val);
	int treeSize();
	std::vector<BST> getAscending();
	bool clear();	
	void setItem(const int& val);
	void setLeft(BST<ItemType>* nextNodePtr);
	void setRight(BST<ItemType>* nextNodePtr);
	int getItem() const;
	BST * getLeft() const;
	BST * getRight() const;
};

#include "BST.cpp"