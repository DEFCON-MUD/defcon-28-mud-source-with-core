inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 49, 0 }));
  set_short( "Hallway - x25y49z0" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y50z0.c",
  "south" : DIR+"/rooms/x25y48z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
