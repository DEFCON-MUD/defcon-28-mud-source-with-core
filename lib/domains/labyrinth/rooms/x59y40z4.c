inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 40, 4 }));
  set_short( "Hallway - x59y40z4" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y40z4.c",
  "east" : DIR+"/rooms/x60y40z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
