inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 31, 9 }));
  set_short( "Passage - x39y31z9" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y32z9.c",
  "south" : DIR+"/rooms/x39y30z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
