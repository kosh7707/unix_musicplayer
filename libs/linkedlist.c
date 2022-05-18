//linkedlist.c

#include "linkedlist.h"

static Node* _head = NULL;
static Node* _tail = NULL;
static Node* _cur_node = NULL;

void print(){
    //재생목록을 콘솔에 출력함
    Node* temp = _head;
    printf("LinkedList [ ");
    while(temp != NULL){
        printf("%s ",temp->data);
        temp = temp->next;
    }
    printf("]\n");
};

Node* append_left(size_t n, char new_data[n]){
    //재생 목록의 첫 번째 위치에 노래를 추가함
    Node* newNode;
    newNode = (Node*)malloc(sizeof(Node));
    newNode->data = new_data;
    newNode->prev = NULL;
    newNode->next = NULL;
    //printf("%s\n", newNode->data);
    if(empty()){
        _head = newNode;
        _tail = newNode;
    }
    else {
        newNode->next = _head;
        _head->prev = newNode;
        _head = newNode;
    }
    //printf("%s\n", _head->data);
    return newNode;
};
