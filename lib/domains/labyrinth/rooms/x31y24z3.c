inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 24, 3 }));
  set_short( "Corridor - x31y24z3" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y24z3.c",
  "east" : DIR+"/rooms/x32y24z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
