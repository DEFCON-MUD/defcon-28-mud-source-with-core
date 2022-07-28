inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 21, 1 }));
  set_short( "Passage - x1y21z1" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y22z1.c",
  "south" : DIR+"/rooms/x1y20z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
