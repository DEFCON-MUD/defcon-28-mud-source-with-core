inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 60, 4 }));
  set_short( "Passage - x9y60z4" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y60z4.c",
  "east" : DIR+"/rooms/x10y60z4.c",
  "south" : DIR+"/rooms/x9y59z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the glorzo in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
