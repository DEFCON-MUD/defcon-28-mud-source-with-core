inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 54, 4 }));
  set_short( "Passage - x56y54z4" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y54z4.c",
  "east" : DIR+"/rooms/x57y54z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
