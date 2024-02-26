inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 16, 5 }));
  set_short( "Hallway - x59y16z5" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y16z5.c",
  "east" : DIR+"/rooms/x60y16z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crappy sales material in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
