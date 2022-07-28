inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 20, 6 }));
  set_short( "Passage - x61y20z6" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y21z6.c",
  "south" : DIR+"/rooms/x61y19z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
