#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

namespace ariel
{
    template <typename T>

    class BinaryTree
    {
        struct Node
        {
            T data;
            Node *left = nullptr;
            Node *right = nullptr;

            Node(T d) : data(d), left(nullptr), right(nullptr) {}
        };
        Node *root;

        class Iterator
        {
        private:
            Node *_cur;

        public:
            Iterator(Node *ptr = nullptr): _cur(ptr){}
            T &operator*() const{return _cur->data;}

            T *operator->() const
            {
                return &(_cur->data);
            }

            // ++i;
            Iterator &operator++()
            {
                return *this;
            }

            // i++;
            const Iterator operator++(int)
            {
                Iterator tmp = *this;
                return tmp;
            }

            bool operator==(const Iterator &rhs) const
            {
                return _cur == rhs._cur;
            }

            bool operator!=(const Iterator &rhs) const
            {
                return _cur != rhs._cur;
            }
        }; // End - IteratorByOrder

    public:
        // Constructors
        BinaryTree<T>()
        {
            root = nullptr;
        }

        BinaryTree<T> add_root(const T &data)
        {
            return *this;
        }

        BinaryTree<T> add_left(const T &data, const T &left)
        {
            return *this;
        }

        BinaryTree<T> add_right(const T &data, const T &right)
        {
            return *this;
        }

        // PreOrder : (root -> left -> right)
        Iterator begin_preorder()
        {
            return Iterator{root};
        }
        Iterator end_preorder()
        {
            return Iterator{root};
        }

        // InOrder : (left -> root -> right)
        Iterator begin_inorder()
        {
            return Iterator{root};
        }

        Iterator end_inorder()
        {
            return Iterator{root};
        }

        // PostOrder : (left -> right -> root)
        Iterator begin_postorder()
        {
            return Iterator{root};
        }

        Iterator end_postorder()
        {
            return Iterator{root};
        }

        Iterator begin()
        {
            return Iterator{root};
        }

        Iterator end()
        {
            return Iterator{root};
        }

        friend std::ostream &operator<<(std::ostream &os, const BinaryTree<T> &bt)
        {
            return os;
        }

    }; 

} 