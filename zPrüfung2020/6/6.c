//
// Created by Jan on 19.05.2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

#define PERROR_AND_EXIT(M) do{perror(M);exit(EXIT_FAILURE);} while(0)

void do_work() {
    for (;;) {}
}

void handle_sigint(int sig) {
    (void)sig; // Vermeidung von "unused parameter" Warnungen
    printf("User Interrupt\n");
    exit(EXIT_SUCCESS);
}

int main(void) {
    pid_t cpid = fork();
    if (cpid == -1) {
        PERROR_AND_EXIT("fork");
    }

    if (cpid > 0) { // Parent-Prozess
        struct sigaction sa;
        sa.sa_handler = handle_sigint;
        sigemptyset(&sa.sa_mask);
        sa.sa_flags = 0;

        if (sigaction(SIGINT, &sa, NULL) == -1) {
            PERROR_AND_EXIT("sigaction");
        }

        do_work();
    } else { // Child-Prozess
        struct sigaction sa;
        sa.sa_handler = SIG_IGN; // Ignoriere SIGINT
        sigemptyset(&sa.sa_mask);
        sa.sa_flags = 0;

        if (sigaction(SIGINT, &sa, NULL) == -1) {
            PERROR_AND_EXIT("sigaction");
        }

        do_work();
    }
}
