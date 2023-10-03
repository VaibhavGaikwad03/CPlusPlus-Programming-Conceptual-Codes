/*
Code 1:
    int &fun() // undefined behaviour
    {
        int iNo = 10;
        // code
        return iNo;
    }
Call : int &ref = fun();
// ref will refer to the freed memory of iNo (dangling reference)

Code 2: // allowed correct
    int &fun()
    {
        static int iNo = 1o;
        // code
        return iNo;
    }

Code 3: // allowed correct
    int &fun(int &ref)
    {
        // code
        return ref;
    }
*/