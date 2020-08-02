class MyHashSet {
public:
    bool dummy[1000000] {false} ;
    MyHashSet() {

    }

    void add(int key) {
        dummy[key] = true ;
    }

    void remove(int key) {
        dummy[key] = false ;
    }

    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return dummy[key] ;
    }
};