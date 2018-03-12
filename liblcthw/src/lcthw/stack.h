#ifndef lcthw_Stack_h
#define lcthw_Stack_h
#include <lcthw/list.h>

#define Stack List

#define Stack_create() List_create()

#define Stack_destroy(S) List_destory((S))

#define Stack_count(S) List_count((S))

#define Stack_push(S, V) List_push((S), (V))

#define Stack_pop(S) List_pop((S))

#define Stack_peek(S) List_last((S))

#define STACK_FOREACH(S, C) LIST_FOREACH((S), first, next, (C))

#endif
