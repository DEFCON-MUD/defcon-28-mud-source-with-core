inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 50, 3 }));
  set_short( "Corridor - x13y50z3" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y50z3.c",
  "east" : DIR+"/rooms/x14y50z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
