inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 50, 7 }));
  set_short( "Hallway - x6y50z7" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y50z7.c",
  "east" : DIR+"/rooms/x7y50z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
