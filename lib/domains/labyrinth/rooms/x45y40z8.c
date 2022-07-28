inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 40, 8 }));
  set_short( "Passage - x45y40z8" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y40z8.c",
  "north" : DIR+"/rooms/x45y41z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
