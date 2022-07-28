inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 46, 0 }));
  set_short( "Hallway - x41y46z0" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y46z0.c",
  "east" : DIR+"/rooms/x42y46z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
