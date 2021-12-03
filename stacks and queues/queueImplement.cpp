#include <iostream>
using namespace std;

#define n 5

class queue{
    int *arr;
    int front;
    int back;

    public:
    queue(){
        arr=new int[n];
        front=back=-1;
    }

    void push(int x){
        if(back==n-1){
            std::cout << "queue overflow" << std::endl;
        }
        back++;
        arr[back]=x;

        if(front==-1)front++;
    }
    void pop(){
        if(front==-1 || front>back){
            std::cout << "queue is empty" << std::endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front==-1 || front>back){
            std::cout << "queue is empty" << std::endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front==-1 || front>back){
            // std::cout << "queue is empty" << std::endl;
            return true;
        }
    }
};

int main(int argc, char const *argv[])
{
    queue q;
    q.push(190);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(4);
    q.push(4);

    std::cout << q.peek() << std::endl;
    for (size_t i = 0; i <10; i++)
    {
        q.pop();
    }
    

    return 0;
}
