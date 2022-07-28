inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 58, 3 }));
  set_short( "Hallway - x2y58z3" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y58z3.c",
  "east" : DIR+"/rooms/x3y58z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
