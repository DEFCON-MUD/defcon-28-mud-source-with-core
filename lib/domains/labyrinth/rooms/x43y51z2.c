inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 51, 2 }));
  set_short( "Passage - x43y51z2" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y52z2.c",
  "south" : DIR+"/rooms/x43y50z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
