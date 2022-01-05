#include <stdio.h>
#include "quack/stack.h"
#include "quack/queue.h"

int main() {
    GStack *stack1 = new_stack();
    int c = 1;
    push(stack1, &c);
    void *g = peek(stack1);
    printf("%d\n", *(int *) g);
    char *name = "anish";
    push(stack1, name);
    void *g2 = peek(stack1);
    double v = 5.56;
    push(stack1, &v);
    void *g3 = peek(stack1);
    printf("%f\n", *(double *) g3);
    pop(stack1);
    void *g4 = peek(stack1);
    printf("%s\n", (char *) g4);
    printf("%d\n", get_remaining_capacity(stack1));
    clear(stack1);
    printf("%d\n", get_remaining_capacity(stack1));
    if (peek(stack1) == NULL) {
        printf("null");
    } else {
        printf("err");
    }
    printf("\n--------------------------------------------------------------------------------------\n");
    GQueue *queue1 = new_queue();
    double q1 = 6.67;
    enqueue(queue1, &q1);
//    ugly but it does the trick --> outputs 6.67
    printf("%f\n", *(double *) (get_entity_val((GQueueEntity *) get_index(queue1, 0))));
    double q2 = 9.98;;
    enqueue(queue1, &q2);
    printf("%f\n", *(double *) (get_entity_val((GQueueEntity *) get_index(queue1, 1))));
    double q3 = 4.42;
    enqueue(queue1, &q3);
    printf("%f\n", *(double *) (get_entity_val((GQueueEntity *) get_index(queue1, 2))));
    void *t = dequeue(queue1);
    printf("\n");
    printf("%f\n", *(double *) (get_entity_val((GQueueEntity *) get_index(queue1, 0))));
    printf("%f\n", *(double *) (get_entity_val((GQueueEntity *) t)));
    printf("\n");
    void *test = first(queue1);
    printf("%f\n", *(double *) test);
    return 0;
}
