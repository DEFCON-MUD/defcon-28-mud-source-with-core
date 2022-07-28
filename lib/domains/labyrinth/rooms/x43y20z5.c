inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 20, 5 }));
  set_short( "Passage - x43y20z5" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y21z5.c",
  "south" : DIR+"/rooms/x43y19z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
