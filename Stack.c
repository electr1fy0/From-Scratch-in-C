#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 8
#define GROWTH_FACTOR 2

typedef struct {
  size_t capacity;
  size_t size;
  size_t element_size;
  void *data;
} Stack;



int stack_init(Stack * s, size_t element_size) {
    if (!s || element_size == 0) return 0;

    s->capacity = INITIAL_CAPACITY;
    s->size = 0;
    s->element_size = element_size;

    s->data = malloc(s->capacity * s->element_size);
    if (!s->data) return 0;

    return 1;
}

int stack_push(Stack * s, const void * element) {
    if (s->size == s->capacity) {
        size_t new_capacity = s->capacity * GROWTH_FACTOR;
        void * new_data = realloc(s->data, new_capacity);
        if (!new_data) return 0;

        s->data = new_data;
        s->capacity = new_capacity;
    }

    void * target = (char *) s-> data;
}

int main() {



    return 0;


}
