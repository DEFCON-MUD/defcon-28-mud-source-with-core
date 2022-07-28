inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 2, 2 }));
  set_short( "Corridor - x38y2z2" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y2z2.c",
  "east" : DIR+"/rooms/x39y2z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
