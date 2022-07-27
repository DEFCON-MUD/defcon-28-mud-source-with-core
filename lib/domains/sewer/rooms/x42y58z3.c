inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 58, 3 }));
  set_short( "Passage - x42y58z3" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y58z3.c",
  "east" : DIR+"/rooms/x43y58z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
