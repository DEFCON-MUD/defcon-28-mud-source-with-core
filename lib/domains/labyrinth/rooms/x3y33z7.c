inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 33, 7 }));
  set_short( "Hallway - x3y33z7" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y34z7.c",
  "south" : DIR+"/rooms/x3y32z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
