#include <stdio.h>

int main(void) {
    // 빠른 입출력 (필요시)
    // setvbuf(stdout, NULL, _IOFBF, 1<<20);
    // setvbuf(stdin,  NULL, _IOFBF, 1<<20);

    // TODO: 풀이 작성
    int T;      // 테스트 케이스 개수 T
    int a, b;   // 피연산항 정수 a(<0), b(<10)

    scanf("%d", &T);    // 테스트 케이스 개수 T 입력
    for( int i=0; i<T; i++ ) {  // for문으로 연산 횟수 제한
        scanf("%d %d", &a, &b); // 피연산항 a, b 입력
        printf("%d\n", a+b);    // 연산 결과 출력
    }

    return 0;
}