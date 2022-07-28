inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 0, 0 }));
  set_short( "Passage - x39y0z0" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y0z0.c",
  "east" : DIR+"/rooms/x40y0z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
