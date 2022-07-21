 
int Res::calcRent(){

    Player *curOwner = this->owner;
    int numOwned = curOwner->propsOwned.find("Res"); // gives the number of properties owned by the curOwner in the same dept
    return 25 * numOwned; 
    
}