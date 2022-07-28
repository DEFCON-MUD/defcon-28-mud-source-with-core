inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 41, 1 }));
  set_short( "Hallway - x3y41z1" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y42z1.c",
  "south" : DIR+"/rooms/x3y40z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
