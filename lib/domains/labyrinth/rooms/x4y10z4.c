inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 10, 4 }));
  set_short( "Corridor - x4y10z4" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y10z4.c",
  "east" : DIR+"/rooms/x5y10z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
