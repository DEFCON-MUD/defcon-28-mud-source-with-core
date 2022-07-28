inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 44, 0 }));
  set_short( "Passage - x1y44z0" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y44z0.c",
  "north" : DIR+"/rooms/x1y45z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
