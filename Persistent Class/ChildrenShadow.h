class ChildrenShadow
{
    private:
        int    id;
        string firstName,
               secondName;
        date   dateOfBirth;
    public:
        ChildrenShadow(int, string, string, date);
        void setId(int);
        void getId();

        void setFirstName(string);
        void getFirstName();

        void setSecondName(string);
        void getSecondName();

        void setDateOfBirth(date);
        void getDateOfBirth();
        void getAge();

        ~ChildrenShadow();
    protected:
};
