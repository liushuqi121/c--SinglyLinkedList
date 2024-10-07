#include <iostream>
using namespace std;
#include "SinglyLinkedList.cpp"

struct Node //定义节点结构
{
    int data;
    Node* next;

    Node(int value) :data (value),next(nullptr) {}//构造函数
};

class SinglyLinkedList //定义链表类
{
private:
    Node* head; //头指针
    int size;


public:
    SinglyLinkedList() :head(nullptr) {}//构造函数


    void insert(int value) {
        Node* newnode = new Node(value);
        if (head == nullptr){
            head = newnode;
            size++;
        }else{
            Node *current = head;
            while(current->next != nullptr){
            current = current->next;
        }
        current->next = newnode;
        size++;
            }
    }//添加新结点到链表尾部



    bool deleteNode(int value) {
        if (head == nullptr){
            cout<<"删尼玛呢，你放了么？";
            return false;
        }else if(head->data == value){
            Node *temp = head;
            head = head->next;//删除头结点
            delete temp;
            size--;
            cout<<"删除是吧，OK了！";
            return true;
        }



        Node *current = head;



        }



};









int main() {


    return 0;
}