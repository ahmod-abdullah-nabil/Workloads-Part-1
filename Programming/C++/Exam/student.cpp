class ForeignStudent : public Student
{

public:
    ForeignStudent();
    ForeignStudent(string nationsvalue);
    bool isFunded() const;

private:
    string nation;
};