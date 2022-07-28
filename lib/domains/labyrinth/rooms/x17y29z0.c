inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 29, 0 }));
  set_short( "Hallway - x17y29z0" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y30z0.c",
  "south" : DIR+"/rooms/x17y28z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
