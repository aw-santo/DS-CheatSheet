#include&lt;iostream&gt;
#include&lt;cstdlib&gt;
using namespace std;

struct stack
{
    int size;
    int top;
    int *arr;
};

void display(struct stack * ptr){
    for (int i = 0; i &lt;= ptr-&gt;top; i++)
    {
        printf("%d ",ptr-&gt;arr[i]);
    }
    printf("\n");
}

int isEmpty(struct stack * ptr){
    if (ptr-&gt;top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack * ptr){
    if (ptr-&gt;top &gt;= ptr-&gt;size-1)
    {
        return 1;
    }
    return 0;
}

int stackBottom(struct stack * ptr){
    if (!isEmpty(ptr))
    {
        return ptr-&gt;arr[0];
    }
    return -1;
}

int stackTop(struct stack * ptr){
    if (!isEmpty(ptr))
    {
        return ptr-&gt;arr[ptr-&gt;top];
    }
    return -1;
}

void push(struct stack * ptr, int data){
    if (!isFull(ptr))
    {
        ptr-&gt;top++;
        ptr-&gt;arr[ptr-&gt;top] = data;
    }
    else{
        printf("Stack overflow!\n");
    }
}

int pop(struct stack * ptr){
    // struct stack * ptr = p;
    int datain = -1;
    if (!isEmpty(ptr))
    {
        datain = stackTop(ptr);
        // free(ptr-&gt;arr[ptr-&gt;top]);
        ptr-&gt;top--;
        // return datain;
    }
    return datain;
}

int main(){
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s-&gt;size = 5;
    s-&gt;top = -1;
    s-&gt;arr = (int *)malloc(s-&gt;size * sizeof(int));
    
    // s-&gt;arr[0] = 0;
    // s-&gt;top++;

    // s-&gt;arr[1] = 1;
    // s-&gt;top++;

    // s-&gt;arr[2] = 2;
    // s-&gt;top++;

    // s-&gt;arr[3] = 3;
    // s-&gt;top++;

    // s-&gt;arr[4] = 4;
    // s-&gt;top++;
    // if (isEmpty(s))
    // {
    //     cout&lt;&lt;"Empty!"&lt;&lt;endl;
    // }
    // else{
    //     cout&lt;&lt;"Not empty!"&lt;&lt;endl;
    // }
    // if (isFull(s))
    // {
    //     cout&lt;&lt;"Full"&lt;&lt;endl;
    // }
    // else{
    //     cout&lt;&lt;"Not full"&lt;&lt;endl;
    // }
    // cout&lt;&lt;stackBottom(s)&lt;&lt;endl;
    // cout&lt;&lt;stackTop(s)&lt;&lt;endl;
    display(s);
    // s = pop(s);
    // display(s);
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    push(s, 5);
    display(s);
    cout&lt;&lt;pop(s)&lt;&lt;"\n";
    display(s);
    push(s, 333);
    display(s);
    return 0;
}