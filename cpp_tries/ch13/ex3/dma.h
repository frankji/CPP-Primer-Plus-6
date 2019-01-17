#ifndef DMA_H_
#define DMA_H_
#include <iostream>

class abcDMA
{
	private:
		char * label;
		int rating;
	public:
		abcDMA(const char * l = "null", int r = 0);
		abcDMA(const abcDMA & rs);
		virtual ~abcDMA();
		abcDMA & operator=(const abcDMA & rs);
		friend std::ostream & operator<<(std::ostream & os, const abcDMA & rs);
		virtual void View() const = 0;
};


class baseDMA : public abcDMA
{
	public:
		baseDMA(const char * l = "null", int r = 0) : abcDMA(l, r) {};
		baseDMA(const baseDMA & rs) : abcDMA(rs) {};
		virtual ~baseDMA();
		baseDMA & operator=(const baseDMA & rs);
		friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs) { return (os << (const abcDMA &) rs); };
		virtual void View() const;
};

class lacksDMA : public abcDMA
{
	private:
		enum { COL_LEN = 40};
		char color[COL_LEN];
	public:
		lacksDMA(const char * c = "blank", const char * l = "null", int r = 0);
		lacksDMA(const char * c, const baseDMA & rs);
		friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
		virtual void View() const;
};

class hasDMA : public abcDMA
{
	private:
		char * style;
	public:
		hasDMA(const char * s = "none", const char * l = "null", int r = 0);
		hasDMA(const char * s, const baseDMA & rs);	
		hasDMA(const hasDMA & hs);
		~hasDMA();
		hasDMA & operator=(const hasDMA & rs);
		friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
		virtual void View() const;
};

#endif


