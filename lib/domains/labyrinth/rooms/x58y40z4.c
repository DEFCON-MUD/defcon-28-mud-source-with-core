inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 40, 4 }));
  set_short( "Corridor - x58y40z4" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y40z4.c",
  "east" : DIR+"/rooms/x59y40z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
