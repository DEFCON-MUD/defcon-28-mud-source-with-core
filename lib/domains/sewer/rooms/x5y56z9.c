inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 56, 9 }));
  set_short( "Passage - x5y56z9" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y56z9.c",
  "north" : DIR+"/rooms/x5y57z9.c",
  "south" : DIR+"/rooms/x5y55z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
