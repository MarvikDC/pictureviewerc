#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include<iostream>
#include"picture.h"

template<class T>
class linked_list
{
    struct node;
   /* {
           T dato;
           node *p_next;
           node *p_back;
           node(const T&d, node *n=nullptr, node *n_b=nullptr)
           {
               dato=d;
               p_next=n;
               p_back=n_b;
           }
    };*/
    public:
        class iterator;
        //private:
        public:
        node *p_head;
        public:
        linked_list();//:p_head(nullptr){}

        ~linked_list();
        /*
        {
            node *del=p_head;
            while(del)
            {
                p_head=del->p_next;
                delete del;
                del=p_head;
            }
        }
*/
        void push_front(const T &d);
        void remove_front();

        iterator begin();
        iterator end();
        iterator rbegin();
        iterator rend();



        void push_back(const T &d);
        void remove_back();
        void remove_this(iterator idel);
        //node my_node();
        //void edit_this(iterator idel);
    };

#include"linked_list.inl"
#endif
