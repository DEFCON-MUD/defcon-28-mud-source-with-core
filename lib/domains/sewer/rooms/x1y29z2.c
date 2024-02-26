inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 29, 2 }));
  set_short( "Hallway - x1y29z2" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y30z2.c",
  "south" : DIR+"/rooms/x1y28z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
