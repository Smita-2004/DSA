// Node *removeLastNode(Node *head){
//     if(head ==NULL){
//         return NULL;
//     }

//     if(head->next ==NULL){
//         delete head;
//         return NULL;
//     }

//     Node *second_last = head;
//     while(second_last->next->next != NULL){
//         second_last = second_last->next;
//     }
//     delete(scond_last->next);
//     second_last->next=NULL:
//     return head;
// }