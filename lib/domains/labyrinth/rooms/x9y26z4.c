inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 26, 4 }));
  set_short( "Passage - x9y26z4" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y26z4.c",
  "south" : DIR+"/rooms/x9y25z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
