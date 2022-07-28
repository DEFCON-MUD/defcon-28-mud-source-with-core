inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 14, 6 }));
  set_short( "Hallway - x23y14z6" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y14z6.c",
  "east" : DIR+"/rooms/x24y14z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
