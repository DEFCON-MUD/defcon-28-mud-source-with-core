inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 51, 8 }));
  set_short( "Hallway - x29y51z8" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y52z8.c",
  "south" : DIR+"/rooms/x29y50z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
