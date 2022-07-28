inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 42, 1 }));
  set_short( "Hallway - x39y42z1" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y42z1.c",
  "north" : DIR+"/rooms/x39y43z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
