inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 40, 7 }));
  set_short( "Corridor - x20y40z7" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y40z7.c",
  "east" : DIR+"/rooms/x21y40z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
