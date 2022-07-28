inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 26, 3 }));
  set_short( "Passage - x28y26z3" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y26z3.c",
  "east" : DIR+"/rooms/x29y26z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
