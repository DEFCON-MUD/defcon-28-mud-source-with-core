inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 24, 3 }));
  set_short( "Passage - x59y24z3" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y24z3.c",
  "north" : DIR+"/rooms/x59y25z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
