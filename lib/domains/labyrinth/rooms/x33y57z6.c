inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 57, 6 }));
  set_short( "Passage - x33y57z6" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y58z6.c",
  "south" : DIR+"/rooms/x33y56z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
