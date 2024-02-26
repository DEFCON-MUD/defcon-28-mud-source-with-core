inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 44, 4 }));
  set_short( "Corridor - x1y44z4" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y44z4.c",
  "north" : DIR+"/rooms/x1y45z4.c",
  "south" : DIR+"/rooms/x1y43z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
