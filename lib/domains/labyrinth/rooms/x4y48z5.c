inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 48, 5 }));
  set_short( "Hallway - x4y48z5" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y48z5.c",
  "east" : DIR+"/rooms/x5y48z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
