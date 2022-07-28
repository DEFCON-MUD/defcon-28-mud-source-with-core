inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 23, 0 }));
  set_short( "Passage - x3y23z0" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y24z0.c",
  "south" : DIR+"/rooms/x3y22z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
