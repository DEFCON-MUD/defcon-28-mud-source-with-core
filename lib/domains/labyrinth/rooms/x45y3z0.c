inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 3, 0 }));
  set_short( "Passage - x45y3z0" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y4z0.c",
  "south" : DIR+"/rooms/x45y2z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
