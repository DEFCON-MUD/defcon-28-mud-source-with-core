inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 34, 0 }));
  set_short( "Passage - x21y34z0" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y35z0.c",
  "south" : DIR+"/rooms/x21y33z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
