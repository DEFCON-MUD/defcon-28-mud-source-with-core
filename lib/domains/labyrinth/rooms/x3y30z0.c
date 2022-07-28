inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 30, 0 }));
  set_short( "Passage - x3y30z0" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y31z0.c",
  "south" : DIR+"/rooms/x3y29z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
