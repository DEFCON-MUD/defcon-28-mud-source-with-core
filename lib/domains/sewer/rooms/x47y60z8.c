inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 60, 8 }));
  set_short( "Hallway - x47y60z8" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y60z8.c",
  "north" : DIR+"/rooms/x47y61z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
