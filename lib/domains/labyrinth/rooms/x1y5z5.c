inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 5, 5 }));
  set_short( "Hallway - x1y5z5" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y6z5.c",
  "south" : DIR+"/rooms/x1y4z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
