#include <stdio.h>

struct Contact {
    char name[20];
    int telnum[20];
};

int main() {
    struct Contact arr[1] = {
        {"John","01012345678"}
    };
    

    return 0;
}
