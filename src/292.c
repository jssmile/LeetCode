/* 

 * We must consider some conditions : 

 * Case 1 : n=1,2 or 3

 * 

 * Case 2 : n=4

 * 

 * Case 3 : n=5

 */



bool canWinNim(int n) {

    return !(n%4 == 0);

}
