#include<stdio.h>
#include<string.h>

// stack 배열
int stack_bank[10000];

// stack 저장 개수. stack이 비어 있으면 -1
int stack_top=-1;

// stack 함수
int push(int);
int pop();
int size();
int empty();
int top();

int main()
{
    int N; // 명령의 수(1<=N<=10,000)
    scanf("%d",&N);
    
    char stack_cmd[11];// stack 명령(push, pop, size, empty, top)
    int stack_new;      // 새로운 stack 값
    int stack_result;   // stack 함수 반환값
    
    // N개의 명령 수행
    for(int i=0;i<N;i++){
        scanf("%s",stack_cmd);          // 명령 확인 후 strcmp로 비교하여 명령 실행
        
        if (0==strcmp(stack_cmd,"push")){   // push
            scanf("%d",&stack_new);
            push(stack_new);
        }
        else if (0==strcmp(stack_cmd,"pop")){   // pop
            stack_result = pop();
            printf("%d\n",stack_result);
        }
        else if (0==strcmp(stack_cmd,"size")){  // size
            stack_result = size();
            printf("%d\n",stack_result);
        }
        else if (0==strcmp(stack_cmd,"empty")){ // empty
            stack_result = empty();
            printf("%d\n",stack_result);
        }
        else if (0==strcmp(stack_cmd,"top")){   // top
            stack_result = top();
            printf("%d\n",stack_result);
        }
        else{
            printf("command error. Enter correct command\n");
            i--;    // 명령 다시 입력
        }
    }
    return 0;
}

// push 함수
int push(int x){
    stack_bank[++stack_top] = x;    // Last input index 뒤에 새로운 값 추가
    return 0;
}

// pop 함수
int pop(){
    if(-1==stack_top){              // stack 비어 있으면 -1 반환
        return -1;
    }
    return stack_bank[stack_top--]; // Last input 출력 및 index 감소
}

// size 함수
int size(){
    return stack_top+1;             // 배열을 이용해 stack 구현하므로 index에  + 1
}

int empty(){
    if(-1==stack_top){              // stack 비어있으면 1
        return 1;
    }
    else{
        return 0;                   // stack에 들어 있으면 0
    }
}

int top(){
    if(-1==stack_top){              // stack 비어있으면 -1
        return -1;
    }
    return stack_bank[stack_top];   // Last input 반환
}