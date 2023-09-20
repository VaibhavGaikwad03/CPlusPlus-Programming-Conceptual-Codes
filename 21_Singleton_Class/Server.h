class demo
{
    int m_iData;
    static demo *m_pPtr;
    demo();
public:
    static demo *GetObject();
    static void DeleteObject();
    void SetData(int iParam);
    void GetData();
};