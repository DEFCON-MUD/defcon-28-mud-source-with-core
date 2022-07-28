inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 40, 3 }));
  set_short( "Passage - x33y40z3" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y40z3.c",
  "east" : DIR+"/rooms/x34y40z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
