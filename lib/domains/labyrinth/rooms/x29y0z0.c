inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 0, 0 }));
  set_short( "Passage - x29y0z0" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y0z0.c",
  "east" : DIR+"/rooms/x30y0z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
