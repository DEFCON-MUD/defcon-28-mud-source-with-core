inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 12, 8 }));
  set_short( "Hallway - x23y12z8" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y12z8.c",
  "north" : DIR+"/rooms/x23y13z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
