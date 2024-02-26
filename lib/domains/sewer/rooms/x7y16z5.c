inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 16, 5 }));
  set_short( "Hallway - x7y16z5" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y16z5.c",
  "east" : DIR+"/rooms/x8y16z5.c",
  "north" : DIR+"/rooms/x7y17z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
