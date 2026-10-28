#include <bits/stdc++.h>
using namespace std;

class MyStack
{
    vector<char> item;
    int top;

public:
    MyStack(int s)
    {
        item.resize(s);
        top = -1;
    }

    void Push(char x)
    {
        item[++top] = x;
    }

    char Pop()
    {
        return item[top--];
    }

    char stacktop()
    {
        return item[top];
    }

    bool isempty()
    {
        return top == -1;
    }
};

int precedence(char ch)
{
    if (ch == '^')
        return 3;
    if (ch == '*' || ch == '/' || ch == '%')
        return 2;
    if (ch == '+' || ch == '-')
        return 1;
    return 0;
}

int main()
{
    string infix;
    cin >> infix;

    // Step 1 : Reverse infix
    reverse(infix.begin(), infix.end());

    // Step 2 : Swap '(' and ')'
    for (int i = 0; i < infix.size(); i++)
    {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }

    MyStack stk(100);
    string postfix = "";

    for (int i = 0; i < infix.size(); i++)
    {
        char symbol = infix[i];

        if ((symbol >= 'a' && symbol <= 'z') ||
            (symbol >= 'A' && symbol <= 'Z') ||
            (symbol >= '0' && symbol <= '9'))
        {
            postfix += symbol;
        }
        else if (symbol == '(')
        {
            stk.Push(symbol);
        }
        else if (symbol == ')')
        {
            while (!stk.isempty() && stk.stacktop() != '(')
            {
                postfix += stk.Pop();
            }

            if (!stk.isempty())
                stk.Pop();
        }
        else
        {
            while (!stk.isempty() &&
                   stk.stacktop() != '(' &&
                   (precedence(stk.stacktop()) > precedence(symbol) ||
                    (precedence(stk.stacktop()) == precedence(symbol) && symbol == '^')))
            {
                postfix += stk.Pop();
            }

            stk.Push(symbol);
        }
    }

    while (!stk.isempty())
    {
        postfix += stk.Pop();
    }

    // Step 3 : Reverse postfix to get prefix
    reverse(postfix.begin(), postfix.end());

    cout << postfix;

    return 0;
}
// Sample Input
// a^b^c+d/e*f+g-h^i
// Your Output
// -++^a^bc*/defg^hi