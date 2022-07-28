inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 52, 8 }));
  set_short( "Passage - x40y52z8" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y52z8.c",
  "east" : DIR+"/rooms/x41y52z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
