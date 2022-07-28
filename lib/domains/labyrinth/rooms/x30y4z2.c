inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 4, 2 }));
  set_short( "Hallway - x30y4z2" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y4z2.c",
  "east" : DIR+"/rooms/x31y4z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
