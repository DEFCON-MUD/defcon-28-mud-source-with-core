inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 0, 2 }));
  set_short( "Hallway - x2y0z2" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y0z2.c",
  "east" : DIR+"/rooms/x3y0z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
