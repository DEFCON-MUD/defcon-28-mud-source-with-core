inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 26, 7 }));
  set_short( "Corridor - x21y26z7" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y26z7.c",
  "south" : DIR+"/rooms/x21y25z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
