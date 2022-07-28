inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 50, 3 }));
  set_short( "Passage - x23y50z3" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y50z3.c",
  "east" : DIR+"/rooms/x24y50z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
