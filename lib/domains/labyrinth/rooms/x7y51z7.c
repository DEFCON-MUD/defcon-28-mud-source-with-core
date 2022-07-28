inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 51, 7 }));
  set_short( "Corridor - x7y51z7" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y52z7.c",
  "south" : DIR+"/rooms/x7y50z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
