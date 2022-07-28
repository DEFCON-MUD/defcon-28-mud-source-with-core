inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 58, 1 }));
  set_short( "Hallway - x19y58z1" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y58z1.c",
  "east" : DIR+"/rooms/x20y58z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
