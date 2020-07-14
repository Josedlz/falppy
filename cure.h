#ifndef CURE_H
#define CURE_H

class enemy_t {
	private:
		int x;
		int y;
		bool taked = false;
	public:
		enemy_t(int x, int y, bool taked) : x{x}, y{y}, taked{false} { }
		virtual ~enemy_t() = default; 
		void move(int dx, int dy);
};

#endif