#include <stdbool.h>

#ifndef CHAPTER4_QUEUE_H
#define CHAPTER4_QUEUE_H

typedef struct GQueueEntity GQueueEntity;
typedef struct GQueue GQueue;

void *get_entity_val(GQueueEntity *);
void *first(GQueue *);
void enqueue(GQueue *, void *);
void *dequeue(GQueue *);
bool q_empty(GQueue *);
bool q_full(GQueue *);
void *get_index(GQueue *, unsigned int);
GQueue *new_queue(void);

#endif //CHAPTER4_QUEUE_H
