inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 33, 5 }));
  set_short( "Corridor - x45y33z5" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y34z5.c",
  "south" : DIR+"/rooms/x45y32z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
