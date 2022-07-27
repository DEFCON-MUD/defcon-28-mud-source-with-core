inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 26, 2 }));
  set_short( "Passage - x56y26z2" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y26z2.c",
  "east" : DIR+"/rooms/x57y26z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
