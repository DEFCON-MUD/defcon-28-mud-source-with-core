inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 54, 0 }));
  set_short( "Hallway - x58y54z0" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y54z0.c",
  "east" : DIR+"/rooms/x59y54z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
