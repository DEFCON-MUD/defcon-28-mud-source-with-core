inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 62, 3 }));
  set_short( "Passage - x17y62z3" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y62z3.c",
  "east" : DIR+"/rooms/x18y62z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
