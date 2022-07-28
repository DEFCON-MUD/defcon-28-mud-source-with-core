inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 4, 0 }));
  set_short( "Passage - x45y4z0" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y5z0.c",
  "south" : DIR+"/rooms/x45y3z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
