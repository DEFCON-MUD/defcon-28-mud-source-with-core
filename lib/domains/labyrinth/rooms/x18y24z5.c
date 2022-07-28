inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 24, 5 }));
  set_short( "Corridor - x18y24z5" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y24z5.c",
  "east" : DIR+"/rooms/x19y24z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
