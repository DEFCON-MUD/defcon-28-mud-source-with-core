inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 26, 0 }));
  set_short( "Corridor - x32y26z0" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y26z0.c",
  "east" : DIR+"/rooms/x33y26z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
