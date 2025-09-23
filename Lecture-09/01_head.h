class bank_account
{
    private:
        string name; //data members
        float bal;
    public: 


        bank_account(string n,float b);
        void get_values(void);
        void deposit(float n1);
        void withdraw(float n2);

};