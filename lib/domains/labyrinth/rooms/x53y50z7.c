inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 50, 7 }));
  set_short( "Hallway - x53y50z7" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y50z7.c",
  "north" : DIR+"/rooms/x53y51z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
