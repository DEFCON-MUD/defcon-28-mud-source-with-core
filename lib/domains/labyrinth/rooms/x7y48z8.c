inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 48, 8 }));
  set_short( "Passage - x7y48z8" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y48z8.c",
  "east" : DIR+"/rooms/x8y48z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
