inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 20, 7 }));
  set_short( "Hallway - x13y20z7" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y21z7.c",
  "south" : DIR+"/rooms/x13y19z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
