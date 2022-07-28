inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 57, 4 }));
  set_short( "Hallway - x61y57z4" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y58z4.c",
  "south" : DIR+"/rooms/x61y56z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
