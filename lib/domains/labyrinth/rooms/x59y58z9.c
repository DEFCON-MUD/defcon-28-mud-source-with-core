inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 58, 9 }));
  set_short( "Hallway - x59y58z9" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y58z9.c",
  "south" : DIR+"/rooms/x59y57z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
