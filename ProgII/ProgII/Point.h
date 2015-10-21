#ifndef _POINT_
#define _POINT_
template <class tmp>

class Point{
private:
	tmp x;
	tmp y;

	public:

		Point(){};
		Point(Point& p){ x=p.x; y=p.y; }
		Point(tmp _x, tmp _y){ x = _x; y = _y; } //Sobrecargant el constructor
		
		~Point(){};

		const	Point& operator =(const Point& p){

			x = p.x;
			y = p.y;

			return *this;
		}

		bool operator ==(const Point& p)const{
			bool tmp1;

			if (x == p.x && y == p.y){
				tmp1 = true;
			}
			else{
				tmp1 = false;
			}
			return tmp1;
		}
		Point operator + (const Point& p)const{
			Point tmp;

			tmp.x = x + p.x;
			tmp.y = y + p.y;

			return tmp;
		}

		Point operator - (const Point& p)const{
			Point tmp;

			tmp.x = x - p.x;
			tmp.y = y - p.y;

			return tmp;
		}
		bool operator != (const Point& p)const{
			bool tmp;

			if (x != p.x && y != p.y){
				tmp = true;
			}
			else{
				tmp = false;
			}

			return tmp;
		}

		const	Point& operator +=(const Point& p){
			x = x + p.x;
			y = y + p.y;

			return *this;
		}
		const	Point& operator -=(const Point& p){
			x = x - p.x;
			y = y - p.y;

			return *this;
		}
		
		bool isZero()const{
			bool tmp;

			if (x == 0 && y == 0){
				tmp = true;
			}
			else{
				tmp = false;
			}

			return tmp;
		}
		void SetZero(){
			x = 0;
			y = 0;
		}
		const   Point Negate(Point& p){
			x = -x;
			y = -y;

			return *this;
		}



};

typedef Point<int> iPoint;
typedef Point<float> fPoint;
typedef Point<double> dPoint;

#endif