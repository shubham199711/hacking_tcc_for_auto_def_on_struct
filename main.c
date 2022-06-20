#include <stdio.h>

struct Test {
    int a;
    int b;
};

void use_struct_pointer(struct Test *test){
    test.a = 5;
    test.b = 6;
    printf("%d", test.a + test.b);
}


int main(void){
    struct Test test;
    use_struct_pointer(&test);
    return 0;
}
