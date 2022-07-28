inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 47, 4 }));
  set_short( "Corridor - x51y47z4" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y48z4.c",
  "south" : DIR+"/rooms/x51y46z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
