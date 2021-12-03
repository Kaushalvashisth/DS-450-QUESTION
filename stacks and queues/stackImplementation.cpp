# include <iostream>
using namespace std;

#define n 5

class stack{
    int *arr;
    int top;

    public:
    stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int x){
        if(top==n-1){
            std::cout << "stack overflow" << std::endl;
        }
        top++;
        arr[top]=x;
    }

    void pop(){
        if (top==-1)
        {
            std::cout << "stack is empty" << std::endl;
            return;
        }
        top--;
    }
    bool isEmpty(){
        return top==-1;
    }
    int getTop(){
        if (top==-1)
        {
            std::cout << "stack is empty" << std::endl;
            return -1;
        }
        return top;
    }
};

int main(int argc, char const *argv[])
{
    stack st;
    st.push(20);
    st.push(90);
    st.push(20);
    st.push(40);
    st.push(70);
    st.push(70);
    std::cout << st.getTop() << std::endl;
    
    st.pop();st.pop();st.pop();st.pop();st.pop();st.pop();st.pop();
    std::cout << st.getTop() << std::endl;
    return 0;
}
