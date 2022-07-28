inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 59, 0 }));
  set_short( "Passage - x47y59z0" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y60z0.c",
  "south" : DIR+"/rooms/x47y58z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
