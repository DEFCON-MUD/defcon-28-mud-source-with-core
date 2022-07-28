inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 52, 0 }));
  set_short( "Corridor - x37y52z0" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y52z0.c",
  "north" : DIR+"/rooms/x37y53z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
