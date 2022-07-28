inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 28, 2 }));
  set_short( "Passage - x40y28z2" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y28z2.c",
  "east" : DIR+"/rooms/x41y28z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
