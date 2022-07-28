inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 52, 5 }));
  set_short( "Passage - x18y52z5" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y52z5.c",
  "east" : DIR+"/rooms/x19y52z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
