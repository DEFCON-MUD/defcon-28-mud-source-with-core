inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 12, 3 }));
  set_short( "Corridor - x47y12z3" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y12z3.c",
  "east" : DIR+"/rooms/x48y12z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
