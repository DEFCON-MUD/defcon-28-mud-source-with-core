inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 20, 0 }));
  set_short( "Corridor - x44y20z0" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y20z0.c",
  "east" : DIR+"/rooms/x45y20z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
