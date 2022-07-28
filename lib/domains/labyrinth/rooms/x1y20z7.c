inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 20, 7 }));
  set_short( "Hallway - x1y20z7" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y20z7.c",
  "north" : DIR+"/rooms/x1y21z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
