inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 14, 4 }));
  set_short( "Corridor - x36y14z4" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y14z4.c",
  "east" : DIR+"/rooms/x37y14z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
