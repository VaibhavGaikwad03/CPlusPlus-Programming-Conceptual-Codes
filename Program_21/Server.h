class demo
{
    int iData;
    static demo *pPtr;
    demo();
public:
    static demo *GetObject();
    static void DeleteObject();
    void SetData(int iParam);
    void GetData();
};