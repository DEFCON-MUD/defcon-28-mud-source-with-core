inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 0, 1 }));
  set_short( "Passage - x58y0z1" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y0z1.c",
  "east" : DIR+"/rooms/x59y0z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
