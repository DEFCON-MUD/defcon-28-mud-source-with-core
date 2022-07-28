inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 30, 2 }));
  set_short( "Passage - x39y30z2" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y31z2.c",
  "south" : DIR+"/rooms/x39y29z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
