inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 34, 6 }));
  set_short( "Corridor - x27y34z6" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y34z6.c",
  "north" : DIR+"/rooms/x27y35z6.c",
  "south" : DIR+"/rooms/x27y33z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
