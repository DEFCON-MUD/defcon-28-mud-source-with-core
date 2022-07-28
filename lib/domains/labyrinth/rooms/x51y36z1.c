inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 36, 1 }));
  set_short( "Passage - x51y36z1" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y36z1.c",
  "north" : DIR+"/rooms/x51y37z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
