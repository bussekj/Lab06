#include <iostream>
#include <vector>
#include "BST.h"

template<class ItemType>
BST<ItemType>::BST()
{

}


template<class ItemType>
BST<ItemType>::~BST()
{
    //do last
}


template<class ItemType>
bool BST<ItemType>::insertNum(ItemType val)
{
    if(m_left == nullptr && m_right == nullptr){
        m_left = newBST;
        return true;
    }
    else if(m_right == nullptr && newBST.m_value >= m_left->m_value){
        m_right = newBST;
        return true;
    }
    else if(m_right == nullptr && newBST.m_value < m_left->m_value) {
        m_right = m_left;
        m_left = newBST;
        return true;
    } 
    else if(m_left->insertNum(val)){
        return true;
    }
     else if(m_right->insertNum(val)){
        return true;
    }
    

    return false;
}


template<class ItemType>
bool BST<ItemType>::findNum(ItemType val)
{
    BST<ItemType> temp = this;
    if(m_value == val)
    {
        return true;
    }
	if(temp.m_left != nullptr && temp.m_left->m_value == val){
        return true;
    }
    else if(temp.m_right != nullptr && temp.m_right->m_value == val){
        return true;
    }
    if  (m_left != nullptr){
        m_left->findNum(val);
    }
    if(m_right != nullptr){
        m_right->findNum(val)
    }

    return false;
        
    
}

template<class ItemType>
bool BST<ItemType>::removeNum(ItemType val)
{

    BST<ItemType> temp = this;
    if(m_value == val){

		BTS<ItemType> right = m_right;
		this = m_left;

        if(this->m_right == nullptr){ 
        	this->m_right = right;
        	return true;
        }
        
        BTS<ItemType> temp = m_right;
        
        while(temp.m_right != nullptr){
            temp = m_right;
        }

        temp.m_right = right;
        
    }
    
    if(m_left != nullptr){
    	m_left->removeNum(val);
    }

    if(m_right != nullptr){
    	m_right->removeNum(val);
    }
}

template <class ItemType>
int BST<ItemType>::treeSize()
{
    int tsize = 0;
    BST<ItemType> temp = this;
    if (temp == nullptr){
        return 0;
    }
    if (temp.m_left == nullptr && temp.m_right == nullptr){
        return 1;
    }
    if(temp.m_left != nullptr){
        tsize += m_left->treeSize(); 
    }
    if(temp.m_right != nullptr){
        tsize += m_right->treeSize();
    }
    return tsize;
}

template <class ItemType>
std::vector<BST<ItemType>> BST<ItemType>::getAscending()
{



    return std::vector<BST>();
}

template<class ItemType>
bool BST<ItemType>::clear()
{
    return false;
}

template<class ItemType>
void setItem(const int& val)
{
	m_value = val;
}

template<class ItemType>
void setLeft(BST<ItemType> * nextNodePtr)
{
	m_left = nextNodePtr;
}

template<class ItemType>
void setRight(BST<ItemType> * nextNodePtr)
{
	m_right = nextNodePtr;
}

template<class ItemType>
int getItem()
{
	return m_value;
}

template<class ItemType>
BST<ItemType> * getLeft()
{
	return m_left;
}

template<class ItemType>
BST<ItemType> * getRight()
{
	return m_right;
}

