inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 52, 1 }));
  set_short( "Corridor - x57y52z1" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y52z1.c",
  "east" : DIR+"/rooms/x58y52z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
