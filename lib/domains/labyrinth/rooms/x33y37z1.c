inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 37, 1 }));
  set_short( "Corridor - x33y37z1" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y38z1.c",
  "south" : DIR+"/rooms/x33y36z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
