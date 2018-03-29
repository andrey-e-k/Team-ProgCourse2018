class ChildrenFactory
{
    private:
        ChildrenShadow childrenShadow;
    public:
        ChildrenFactory();
        void create();
        void getUniqueId();
        void findById();
        void find();

        ~ChildrenFactory();
    protected:
};
