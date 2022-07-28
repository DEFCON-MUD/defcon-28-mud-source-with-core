inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 26, 5 }));
  set_short( "Corridor - x4y26z5" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y26z5.c",
  "east" : DIR+"/rooms/x5y26z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
