inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 47, 1 }));
  set_short( "Corridor - x9y47z1" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y48z1.c",
  "south" : DIR+"/rooms/x9y46z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
