class golf
{
	private:
		static const int Len = 40;
		char fullname[Len];
		int handicap;
	public:
		golf(const char * name = "", int hc = 0);
		void setgolf();
		void sethandicap(int hc) {handicap = hc;}
		void showgolf() {std::cout << "Handicap of golfer " << fullname << ": " << handicap << std::endl;}
};
