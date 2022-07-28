inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 17, 8 }));
  set_short( "Corridor - x21y17z8" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y18z8.c",
  "south" : DIR+"/rooms/x21y16z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
