inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 19, 2 }));
  set_short( "Corridor - x29y19z2" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y20z2.c",
  "south" : DIR+"/rooms/x29y18z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
