inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 38, 2 }));
  set_short( "Hallway - x37y38z2" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y38z2.c",
  "north" : DIR+"/rooms/x37y39z2.c",
  "south" : DIR+"/rooms/x37y37z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
