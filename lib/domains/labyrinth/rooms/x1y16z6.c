inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 16, 6 }));
  set_short( "Passage - x1y16z6" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y16z6.c",
  "north" : DIR+"/rooms/x1y17z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
