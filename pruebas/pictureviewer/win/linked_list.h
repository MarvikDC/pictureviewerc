#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include<iostream>

//using namespace std;

template<class T>
class linked_list
{
    struct node
    {
        T dato;
        node *p_next;
        node *p_back;
        node(const T&d, node *n=nullptr, node *n_b=nullptr)
        {
            dato=d;
            p_next=n;
            p_back=n_b;
       }
    };
    public:
        class iterator
        {
            private:
                node *n;
            public:
                iterator(node *_n=nullptr)
                {
                    n=_n;
                }
                ~iterator()=default;
                T &operator *()
                {
                    return n->dato;
                }
                iterator &operator ++()
                {
                    n=n->p_next;
                    return *this;
                }
                iterator &operator --()
                {
                    n = n->p_back;
                    return *this;
                }
                bool operator!=(const iterator &it)
                {
                    return n!=it.n;
                }
        };

    private:
        node *p_head;
    public:
        linked_list():p_head(nullptr){}

        ~linked_list()
        {
            //delete all nodes
            node *del=p_head;
            while(del)
            {
                p_head=del->p_next;
                delete del;
                del=p_head;
            }
        }
        void push_front(const T &d)
        {
            p_head=new node(d,p_head,nullptr);

        }
        void remove_front()
        {
            node *del=p_head;
            p_head=p_head->p_next;
            p_head->p_back=nullptr;
            delete del;
        }

        iterator begin()
        {
            return iterator (p_head);
        }
        iterator end()
        {
            /*node *aux1;
            node *aux2;
            aux1=p_head;
            while (aux1!=nullptr)
            {
                aux2=aux1;
                aux1=aux1->p_next;
            }

            return iterator(aux2);*/
            return iterator(nullptr);
        }
         iterator last()
        {
            node *aux1;
            node *aux2;
            aux1=p_head;
            while (aux1!=nullptr)
            {
                aux2=aux1;
                aux1=aux1->p_next;
            }

            return iterator (aux2);
        }

         void push_back(const T &d)
        {
            node *aux1;
            node *aux2;
            aux1=p_head;
            while (aux1!=nullptr)
            {
                aux2=aux1;
                aux1=aux1->p_next;
            }
            //node *aux3=aux2;
            aux2->p_next=new node(d,nullptr,aux2);
        }
        void remove_back()
        {
            node *previus=p_head;
            node *aux1=p_head ->p_next;
            while (previus->p_next->p_next!=nullptr)
            {
                previus=aux1;
                aux1=aux1 ->p_next;
            }
            delete aux1;
            previus->p_next=nullptr;
        }
    };




#endif // LINKED_LIST_H
