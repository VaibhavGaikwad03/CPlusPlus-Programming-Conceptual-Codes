/*
1.
    int iNo = 10;
    int &ref = iNo;
    iNo++;      // allowed, as iNo1 is non constant
    ref++;      // allowed, as referring to non-constant
2.
    const int iNo = 10;
    const int &ref = iNo;
    iNo++;      // error, as iNo is constant
    ref++;      // error, as refering to constant
3.
    int iNo = 10;
    const int &ref = iNo;   // allowed
    iNo++;      // allowed, as non-constant
    ref++;      // error, refering to constant asa tyala vattay
4. 
    const int iNo = 10;
    int &ref = iNo;   // error, khota bolla ahe mhnun
*/