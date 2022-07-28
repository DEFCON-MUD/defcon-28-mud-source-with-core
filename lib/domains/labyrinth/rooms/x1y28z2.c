inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 28, 2 }));
  set_short( "Passage - x1y28z2" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y28z2.c",
  "north" : DIR+"/rooms/x1y29z2.c",
  "south" : DIR+"/rooms/x1y27z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
