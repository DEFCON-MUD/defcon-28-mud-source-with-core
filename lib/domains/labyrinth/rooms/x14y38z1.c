inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 38, 1 }));
  set_short( "Passage - x14y38z1" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y38z1.c",
  "east" : DIR+"/rooms/x15y38z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
