inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 28, 6 }));
  set_short( "Passage - x41y28z6" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y28z6.c",
  "east" : DIR+"/rooms/x42y28z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
