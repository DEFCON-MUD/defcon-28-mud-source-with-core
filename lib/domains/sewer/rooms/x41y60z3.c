inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 60, 3 }));
  set_short( "Hallway - x41y60z3" );
set_objects( DIR+"/monsters/python.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y60z3.c",
  "north" : DIR+"/rooms/x41y61z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crappy sales material in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
