inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 5, 8 }));
  set_short( "Passage - x25y5z8" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y6z8.c",
  "south" : DIR+"/rooms/x25y4z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
