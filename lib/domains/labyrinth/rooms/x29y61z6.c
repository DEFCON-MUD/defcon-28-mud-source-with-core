inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 61, 6 }));
  set_short( "Hallway - x29y61z6" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y62z6.c",
  "south" : DIR+"/rooms/x29y60z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
