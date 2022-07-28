inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 57, 0 }));
  set_short( "Corridor - x1y57z0" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y58z0.c",
  "south" : DIR+"/rooms/x1y56z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
