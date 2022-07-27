inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 12, 1 }));
  set_short( "Passage - x56y12z1" );
set_objects( DIR+"/monsters/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y12z1.c",
  "east" : DIR+"/rooms/x57y12z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
