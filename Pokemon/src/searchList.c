#include <stdio.h>
#include "head.h"
#include <string.h>

extern POKEMON* head;

POKEMON* searchList(char* value) {
    POKEMON* current = head;
    current = head;
    while (current != NULL) {
        if (strcmp(current->name, value) == 0) {
            return current; // 값을 찾았으면 해당 노드 반환
        }
        current = current->next;
    }
    return NULL; // 값을 찾지 못했으면 NULL 반환
}
