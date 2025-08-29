// state_machine.c
// Simple state machine example
#include <stdio.h>

typedef enum {IDLE, RUNNING, ERROR} State;

int main() {
    State current = IDLE;
    for (int i = 0; i < 3; i++) {
        if (current == IDLE) {
            printf("State: IDLE\n");
            current = RUNNING;
        } else if (current == RUNNING) {
            printf("State: RUNNING\n");
            current = ERROR;
        } else {
            printf("State: ERROR\n");
            current = IDLE;
        }
    }
    // Exercise: Add a new state and transition logic
    return 0;
}
