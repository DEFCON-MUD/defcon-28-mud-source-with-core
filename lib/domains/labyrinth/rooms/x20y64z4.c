inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 64, 4 }));
  set_short( "Passage - x20y64z4" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y64z4.c",
  "east" : DIR+"/rooms/x21y64z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
