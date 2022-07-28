inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 35, 5 }));
  set_short( "Corridor - x47y35z5" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y36z5.c",
  "south" : DIR+"/rooms/x47y34z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
