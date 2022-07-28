inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 64, 9 }));
  set_short( "Hallway - x12y64z9" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y64z9.c",
  "east" : DIR+"/rooms/x13y64z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
