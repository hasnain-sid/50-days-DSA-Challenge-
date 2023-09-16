/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes her
        if(head == NULL) return head;
        
        Node *nextNode, *prevNode = NULL;
        while (head) {
            nextNode = head->next;
            head->next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        
        head = prevNode;
        Node * curr_head = head;
        // return head;
        
        int maxm = head -> data;
        head = head -> next;
        while(head)
        {
            if(head -> data >= maxm)
            {
                maxm = head -> data;
                prevNode = head;
                head = head -> next;
                
            }
            else
            {
                prevNode -> next = head-> next;
                // prevNode = head;
                head = head-> next;
            }
        }
        head = curr_head;
        
        nextNode, prevNode = NULL;
        while (head) {
            nextNode = head->next;
            head->next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        
        return prevNode;
    }
        
};
   