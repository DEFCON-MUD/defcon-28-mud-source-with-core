inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 28, 0 }));
  set_short( "Passage - x39y28z0" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y28z0.c",
  "south" : DIR+"/rooms/x39y27z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
