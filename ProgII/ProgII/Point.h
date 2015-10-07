
class Point{
private:
	int x;
	int y;

	public:

		Point();
		Point(Point& p){ x=p.x; y=p.y; }
		Point(int _x, int _y){ x = _x; y = _y; }

const	Point& operator =(const Point& p);
		bool operator ==(const Point& p)const;
		Point operator + (const Point& p)const;
		Point operator - (const Point& p)const;
		bool operator != (const Point& p)const;
const	Point& operator +=(const Point& p);
const	Point& operator -=(const Point& p);
		
		bool isZero()const;
		void SetZero();
const   Point Negate(Point& p);
};