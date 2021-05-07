#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node *tortoise = head;
    node *hare = head;
    
    do {
        if (hare->next->next == NULL) {
             return 0;
        } 
        else {
            hare = hare->next->next; 
            tortoise = tortoise->next;
           
            if (hare == tortoise) {
                return 1;
                break;
            }
        } 
    }while (hare != tortoise);
 
    return 0;
}
