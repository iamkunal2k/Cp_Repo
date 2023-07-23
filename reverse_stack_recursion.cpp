// Problem link:
// https://www.codingninjas.com/studio/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

void insertAtBottom(stack<int> &stack, int element){
    
    //base case
    if(stack.empty()) {
        stack.push(element);
        return;
    } 

    int num = stack.top();
    stack.pop();

    //recursive call
    insertAtBottom(stack, element);
    stack.push(num);


}


void reverseStack(stack<int> &stack) {

    //base case
    if(stack.empty()) {
        return;
    }

    int num = stack.top() ;
    stack.pop();

    //recursive call
    reverseStack(stack);

    insertAtBottom(stack, num);
}