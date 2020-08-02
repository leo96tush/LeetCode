class MyHashSet {
    boolean[] dummy ;
    public MyHashSet() {
        dummy = new boolean[1000000];
    }

    public void add(int key) {
        dummy[key] = true ;
    }

    public void remove(int key) {
        dummy[key] = false ;
    }

    /** Returns true if this set contains the specified element */
    public boolean contains(int key) {
        return dummy[key] ;
    }
}