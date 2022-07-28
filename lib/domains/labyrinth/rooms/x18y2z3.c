inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 2, 3 }));
  set_short( "Passage - x18y2z3" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y2z3.c",
  "east" : DIR+"/rooms/x19y2z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
