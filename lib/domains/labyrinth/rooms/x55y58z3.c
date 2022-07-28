inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 58, 3 }));
  set_short( "Hallway - x55y58z3" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y58z3.c",
  "east" : DIR+"/rooms/x56y58z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
