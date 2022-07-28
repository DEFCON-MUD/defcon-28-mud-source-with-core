inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 61, 6 }));
  set_short( "Hallway - x25y61z6" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y62z6.c",
  "south" : DIR+"/rooms/x25y60z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
