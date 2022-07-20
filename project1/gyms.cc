

int Gyms::calcRent() const { 
    //step1: player has to roll die
    int sum = roll();
    //step2:
    //otherPropOwn are dummy variables 
    string curPropOwn = this->owner; 
    if (curPropOwn == otherPropOwner){
        return sum * 10;
    }
    return sum * 4; 
}