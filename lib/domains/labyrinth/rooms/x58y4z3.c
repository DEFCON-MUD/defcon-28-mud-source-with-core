inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 4, 3 }));
  set_short( "Passage - x58y4z3" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y4z3.c",
  "east" : DIR+"/rooms/x59y4z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
