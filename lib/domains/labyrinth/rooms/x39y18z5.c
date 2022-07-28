inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 18, 5 }));
  set_short( "Passage - x39y18z5" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y18z5.c",
  "south" : DIR+"/rooms/x39y17z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
