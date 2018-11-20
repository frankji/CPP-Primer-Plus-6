class Person
{
	private:
		static const int LIMIT = 25;
		std::string lname; //Person's last name
		char fname[LIMIT]; //Person's first name
	public:
		Person() {lname = ""; fname[0] = '\0';} // #1
		Person(const std::string & ln, const char * fn = "Heyyou");
		void Show() const; // first name lastname format, add const if you dont want to change 'this'
		void FormalShow() const; // lastname, firstname format
};
