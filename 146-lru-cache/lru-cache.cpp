class LRUCache {
public:
    // Doubly Linked List:
    class Node{
    public:
    Node* prev;
    int key;
    int value;
    Node* next;
    // Constructor:
    Node(int ky, int val): key(ky), value(val), prev(nullptr), next(nullptr){};
  };
  int capacity;
  public:
//   For store aa hashing of the unordered map.
  unordered_map<int, Node*>mp;
  Node *head=nullptr, *tail=nullptr;

  // Constructore Value:
  LRUCache(int size){
    this->capacity=size;
    head=new Node(-1, -1);  
    tail=new Node(-1, -1);  
    head->next=tail;
    tail->prev=head;
    mp.clear();
  }

// delete from the head node.
  void deleteTheNode(Node* temp){
    Node *previousNode=temp->prev;
    Node* afterNode=temp->next;
    previousNode->next=afterNode;
    afterNode->prev=previousNode;
  }
//   insert only after the head
  void insertAfterHeadatStart(Node* temp){
    Node* afterTheHead=head->next;
    head->next=temp;
    temp->next=afterTheHead;
    temp->prev=head;
    afterTheHead->prev=temp;
  }

  // Return the value of the key, if exist else return -1;
  int get(int key){
    // If That value doesn't have
    // Key doesn't exist:
      if(mp.find(key)==mp.end()){
        return -1;
      }
      // Store the node:
      Node* temp=mp[key];
      // If Touched someone we've to mvoe to othe front:
      deleteTheNode(temp);


      insertAfterHeadatStart(temp);
      
      return temp->value;
    }
    // Update the value of the key if exists, else add to the cache, if it's exced the capacity remove teh least recently used.
    void put(int key, int value){
      if(mp.find(key)!=mp.end()){
        Node* temp=mp[key];
        temp->value=value;
        // If Touched someone we've to mvoe to othe front:
          deleteTheNode(temp);
      
          insertAfterHeadatStart(temp);
        }
        else{
          // The size is exceeded:
          if(mp.size()==capacity){
            // Remove that lru from both hashing and also from the dll.
            Node* temp=tail->prev;
            mp.erase(temp->key);
            deleteTheNode(temp);
          }
          // Create a new Node:
              Node* temp=new Node(key, value);
              mp[key]=temp;
              insertAfterHeadatStart(temp);
        }
  }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */