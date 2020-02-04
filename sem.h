
struct Node{
    struct task_struct* task;//represents the process
    struct Node* next;
};
//priority queue using double-linked-list
struct pque{
    struct Node* head;
    //struct Node* tail;
    //int length;
};
void enqueue(struct pque* queue);
void dequeue(struct pque* queue);
int get_length(struct pque* queue);


//runyuan Yan 1550-semaphore//
struct cs1550_sem{
    int value;
    struct pque *pq;
};