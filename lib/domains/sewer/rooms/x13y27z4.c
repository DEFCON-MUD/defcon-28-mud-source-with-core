inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 27, 4 }));
  set_short( "Passage - x13y27z4" );
set_objects( DIR+"/monsters/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y28z4.c",
  "south" : DIR+"/rooms/x13y26z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
