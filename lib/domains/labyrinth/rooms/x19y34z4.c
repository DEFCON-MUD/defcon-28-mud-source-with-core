inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 34, 4 }));
  set_short( "Corridor - x19y34z4" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y34z4.c",
  "north" : DIR+"/rooms/x19y35z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
