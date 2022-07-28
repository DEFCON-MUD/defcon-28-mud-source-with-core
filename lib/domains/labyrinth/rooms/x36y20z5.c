inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 20, 5 }));
  set_short( "Corridor - x36y20z5" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y20z5.c",
  "east" : DIR+"/rooms/x37y20z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
