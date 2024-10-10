// 1472. Design Browser History 

/*
You have a browser of one tab where you start on the homepage and you can visit another url, 
get back in the history number of steps or move forward in the history number of steps.

Implement the BrowserHistory class:

BrowserHistory(string homepage) Initializes the object with the homepage of the browser.
void visit(string url) Visits url from the current page. It clears up all the forward history.
string back(int steps) Move steps back in history. If you can only return x steps in the history and 
steps > x, you will return only x steps. Return the current url after moving back in history at most steps.
string forward(int steps) Move steps forward in history. If you can only forward x steps in the history and 
steps > x, you will forward only x steps. Return the current url after forwarding in history at most steps.


Example:

Input:
["BrowserHistory","visit","visit","visit","back","back","forward","visit","forward","back","back"]
[["leetcode.com"],["google.com"],["facebook.com"],["youtube.com"],[1],[1],[1],["linkedin.com"],[2],[2],[7]]
Output:
[null,null,null,null,"facebook.com","google.com","facebook.com",null,"linkedin.com","google.com","leetcode.com"]

Constraints:

1 <= homepage.length <= 20
1 <= url.length <= 20
1 <= steps <= 100
homepage and url consist of  '.' or lower case English letters.
At most 5000 calls will be made to visit, back, and forward.
*/



/*
class BrowserHistory {
public:

    class Node
    {
    public:
        string data;
        Node *next;
        Node *prev;

        Node(string data)
        {
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
    };

    Node *current = new Node("");

    BrowserHistory(string homepage) {
        current->data = homepage;
    }
    
    void visit(string url) {
        Node *newNode = new Node(url);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
    }
    
    string back(int steps) {
        for (int i = 0; i < steps; i++)
        {
            if (current->prev != NULL) current = current->prev;
        }
        return current->data;
    }
    
    string forward(int steps) {
        for (int i = 0; i < steps; i++)
        {
            if (current->next != NULL) current = current->next;
        }
        return current->data;
    }
};
*/