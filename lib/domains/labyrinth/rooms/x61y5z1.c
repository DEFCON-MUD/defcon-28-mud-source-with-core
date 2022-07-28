inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 5, 1 }));
  set_short( "Corridor - x61y5z1" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y6z1.c",
  "south" : DIR+"/rooms/x61y4z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
