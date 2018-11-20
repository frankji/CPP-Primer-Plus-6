const int ChSize = 20;

class Plorg
{
	private:
		static const int ChSize = 20;
		char name[ChSize];
		int CI;
	public:
		Plorg(const char * fullname = "Plorga", int ci = 50);
		void setCI(int ci = 50);
		void showPlorg() const;
};
