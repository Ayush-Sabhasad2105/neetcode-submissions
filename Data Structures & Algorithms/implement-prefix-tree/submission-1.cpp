class Trienode{
public:
    Trienode* children[26];
    bool endofword;

    Trienode(){
        for(int i = 0; i < 26; i++){
            children[i] = nullptr;
        }

        endofword = false;
    }

};

class PrefixTree {

    Trienode* root;

public:

    PrefixTree() {
        root = new Trienode();    
    }
    
    void insert(string word) {

        Trienode* curr = root;
        for(char c : word){

            int i = c - 'a';
            if(curr->children[i] == nullptr){
                curr->children[i] = new Trienode();
            }

            curr = curr->children[i];
        }

        curr->endofword = true;
    }
    
    bool search(string word) {
        
        Trienode* curr = root;
        for(char c : word){
            
            int i = c - 'a';
            if(curr->children[i] == nullptr){
                return false;
            }

            curr = curr->children[i];
        }

        return curr->endofword;
    }
    
    bool startsWith(string prefix) {
        
        Trienode* curr = root;
        for(char c : prefix){

            int i = c - 'a';
            if (curr->children[i] == nullptr) {
                return false;
            }
            curr = curr->children[i];
        }
        return true;
    }
};
