inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 34, 8 }));
  set_short( "Hallway - x17y34z8" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y34z8.c",
  "south" : DIR+"/rooms/x17y33z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
