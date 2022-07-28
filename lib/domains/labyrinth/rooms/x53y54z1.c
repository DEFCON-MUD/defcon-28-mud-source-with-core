inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 54, 1 }));
  set_short( "Corridor - x53y54z1" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y54z1.c",
  "east" : DIR+"/rooms/x54y54z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
