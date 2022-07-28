inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 62, 2 }));
  set_short( "Corridor - x32y62z2" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y62z2.c",
  "east" : DIR+"/rooms/x33y62z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
