inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 58, 4 }));
  set_short( "Hallway - x27y58z4" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y59z4.c",
  "south" : DIR+"/rooms/x27y57z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
