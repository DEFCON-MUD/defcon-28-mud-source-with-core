inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 33, 1 }));
  set_short( "Hallway - x45y33z1" );
set_objects( DIR+"/monsters/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y34z1.c",
  "south" : DIR+"/rooms/x45y32z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
