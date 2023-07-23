// Problem Link :
// https://www.codingninjas.com/studio/problems/valid-parenthesis_795104?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio



bool isValidParenthesis(string expression)
{
    stack<char> s;

    for (int i =0; i < expression.length(); i++) {
        char ch = expression[i];

        // if opening bracket push element in stack
        if(ch == '{' || ch == '[' || ch == '(' ) {
            s.push(ch);
        }

        // if closing bracket, check top and pop the element
        else {
          if (!s.empty()) {

            char top = s.top();

            if( (ch == ')' && top == '(') || 
                     ( ch == '}' && top == '{') || 
                     (ch == ']' && top == '[') ) {
                      s.pop();
            }
            else {
                return false;
            }
          } 
          else {
            return false;
          }
        }
    }

    if(s.empty()) return true;
    else return false;
}