#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// Node structure for the doubly linked list
struct Node {
    string address;
    Node* prev;
    Node* next;
    
    Node(const string& addr) : address(addr), prev(nullptr), next(nullptr) {}
};

// Doubly linked list class
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    Node* current;
    unordered_map<string, Node*> addressMap; // To quickly find nodes by address

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr), current(nullptr) {}

    // Insert a new address into the list
    void insert(const string& address) {
        Node* newNode = new Node(address);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        addressMap[address] = newNode; // Map the address to the node
    }

    // Visit an address
    string visit(const string& address) {
        if (addressMap.find(address) != addressMap.end()) {
            current = addressMap[address];
            return current->address;
        } else {
            return "Not Available";
        }
    }

    // Move to the next address
    string next() {
        if (current && current->next) {
            current = current->next;
            return current->address;
        } else {
            return "Not Available";
        }
    }

    // Move to the previous address
    string prev() {
        if (current && current->prev) {
            current = current->prev;
            return current->address;
        } else {
            return "Not Available";
        }
    }
};

int main() {
    DoublyLinkedList dll;

    // Read the addresses for the linked list
    string address;
    while (cin >> address && address != "end") {
        dll.insert(address);
    }

    // Read the number of queries
    int Q;
    cin >> Q;
    cin.ignore(); // Ignore the newline character after the number

    // Process each command
    for (int i = 0; i < Q; ++i) {
        string command;
        getline(cin, command);

        if (command.substr(0, 6) == "visit ") {
            string addr = command.substr(6);
            cout << dll.visit(addr) << endl;
        } else if (command == "next") {
            cout << dll.next() << endl;
        } else if (command == "prev") {
            cout << dll.prev() << endl;
        }
    }

    return 0;
}
