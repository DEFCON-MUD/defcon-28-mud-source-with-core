inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 55, 4 }));
  set_short( "Passage - x1y55z4" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y56z4.c",
  "south" : DIR+"/rooms/x1y54z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
