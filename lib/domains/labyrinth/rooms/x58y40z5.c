inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 40, 5 }));
  set_short( "Corridor - x58y40z5" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y40z5.c",
  "east" : DIR+"/rooms/x59y40z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
