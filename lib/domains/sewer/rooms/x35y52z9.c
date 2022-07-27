inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 52, 9 }));
  set_short( "Corridor - x35y52z9" );
set_objects( DIR+"/monsters/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y52z9.c",
  "east" : DIR+"/rooms/x36y52z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
