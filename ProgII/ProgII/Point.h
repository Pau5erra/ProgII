
class Point{
private:
	int x;
	int y;

	public:

		Point operator =(Point p);
		bool operator ==(Point p)const;
		Point operator + (Point p)const;
		Point operator - (Point p)const;
		bool operator != (Point p)const;
		Point operator +=(Point p);
		Point operator -=(Point p);

		bool isZero()const;
		void SetZero();
		Point Negate(Point p);
};