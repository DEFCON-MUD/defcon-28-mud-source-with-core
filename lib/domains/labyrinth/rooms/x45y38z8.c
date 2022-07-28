inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 38, 8 }));
  set_short( "Corridor - x45y38z8" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y38z8.c",
  "south" : DIR+"/rooms/x45y37z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
