inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 12, 0 }));
  set_short( "Hallway - x2y12z0" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y12z0.c",
  "east" : DIR+"/rooms/x3y12z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
