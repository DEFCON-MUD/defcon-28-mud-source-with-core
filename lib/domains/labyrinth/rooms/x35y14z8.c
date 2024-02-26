inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 14, 8 }));
  set_short( "Passage - x35y14z8" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y14z8.c",
  "north" : DIR+"/rooms/x35y15z8.c",
  "south" : DIR+"/rooms/x35y13z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
