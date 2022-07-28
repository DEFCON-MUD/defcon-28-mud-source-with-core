inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 51, 0 }));
  set_short( "Hallway - x61y51z0" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y52z0.c",
  "south" : DIR+"/rooms/x61y50z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
