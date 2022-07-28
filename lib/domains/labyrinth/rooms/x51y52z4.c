inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 52, 4 }));
  set_short( "Passage - x51y52z4" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y52z4.c",
  "south" : DIR+"/rooms/x51y51z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
