inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 46, 7 }));
  set_short( "Passage - x60y46z7" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y46z7.c",
  "east" : DIR+"/rooms/x61y46z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
