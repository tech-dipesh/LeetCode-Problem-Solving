class BrowserHistory {
    class Node{
        public:
        string val;
        Node* next;
        Node* prev;
        // Constructor:
        Node(): val(""), next(nullptr), prev(nullptr){};
        Node(string data): val(data), next(nullptr), prev(nullptr){};
        Node(string data, Node* nn, Node* pp): val(data), next(nn), prev(pp){};
    };
public:
    Node* current;
    BrowserHistory(string homepage) {
        current=new Node(homepage);
    }
    
    void visit(string url) {
        Node* newBrowser=new Node(url);
        // must set to the  prvious
        newBrowser->prev=current;
        current->next=newBrowser;
        current=newBrowser;
    }
    
    string back(int steps) {
        if(current==nullptr){
            return "";
        }
        while(steps--){
            if(current->prev==nullptr){
                return current->val;
            }
            current=current->prev;
        }
        return current->val;
    }
    
    string forward(int steps) {
        if(current==nullptr){
            return "";
        }
        while(steps--){
            if(current->next==nullptr){
                return current->val;
            }
            current=current->next;
        }
        return current->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */