#include <stdio.h>

struct Contact {
    char name[20];
    int telnum[20];
};

enum command {
    CREATE,
    SEARCH,
    DELETE,
    UPDATE
};

int main() {
    struct Contact arr[1] = {
        {"John","01012345678"}
    };
    

    return 0;
}
