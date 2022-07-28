inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 50, 1 }));
  set_short( "Corridor - x35y50z1" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y50z1.c",
  "south" : DIR+"/rooms/x35y49z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
