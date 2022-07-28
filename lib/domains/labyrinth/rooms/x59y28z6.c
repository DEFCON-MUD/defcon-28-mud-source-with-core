inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 28, 6 }));
  set_short( "Hallway - x59y28z6" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y28z6.c",
  "east" : DIR+"/rooms/x60y28z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
