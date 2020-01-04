#include <bits/stdc++.h>
#define MAX 100

class twoStacks{
private:
    int arr[MAX];
    int top1=-1;
    int top2=MAX;
public:
    void push1(int data1){
        if (top1<top2-1){
            arr[++top1]=data1;
        }
        return;
    }

    void push2(int data2){
        if (top1<top2-1){
            arr[--top2]=data2;
        }
        return;
    }

    int top11(){
        return arr[top1];
    }

    int top22(){
        return arr[top2];
    }

    void pop1(){
        if (top1>=0){
            top1--;
        }
        return ;
    }

     void pop2(){
        if (top2<MAX){
            top2++;
        }
        return ;
    }
};

int main(){
    twoStacks s1;
    //twoStacks s2;
    s1.push1(3);
    s1.push1(4);
    s1.push2(6);
    s1.push2(8);
    s1.pop1();




    std::cout<<s1.top11()<<std::endl;
    std::cout<<s1.top22();

    return 0;
}
