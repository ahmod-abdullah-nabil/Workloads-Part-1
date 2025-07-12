class SmartBut : public Smart
{
public:
    SmartBut();
    SmartBut(bool toocrazy);
    bool isCrazy() const;

private:
    bool crazy;
};