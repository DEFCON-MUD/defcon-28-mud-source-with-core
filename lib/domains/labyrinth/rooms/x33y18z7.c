inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 18, 7 }));
  set_short( "Hallway - x33y18z7" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y18z7.c",
  "south" : DIR+"/rooms/x33y17z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
