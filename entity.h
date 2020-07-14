#ifndef ENTITY_H
#define ENTITY_H

#include <vector>

class entity_t{
	protected:
		int x = 0;
		int y = 0;
		int direction = 0; //1 : north, 2 : east, 3 : south, 4 : west;
		bool alive = true;
	public:
		entity_t() = default;
		entity_t(int x, int y, std::vector<std::vector<char>>& mapa);
		virtual ~entity_t() = default;
		virtual void move(int dx, int dy, std::vector<std::vector<char>>& mapa) = 0;
		virtual void set_coords(int x_, int y_);
		virtual int get_x();
		virtual int get_y();
		virtual int get_direction();
		virtual bool get_alive();
		virtual void set_alive(bool state);
};

#endif
