inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 10, 4 }));
  set_short( "Hallway - x53y10z4" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y10z4.c",
  "south" : DIR+"/rooms/x53y9z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
