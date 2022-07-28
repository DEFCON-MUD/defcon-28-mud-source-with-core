inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 34, 3 }));
  set_short( "Corridor - x2y34z3" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y34z3.c",
  "east" : DIR+"/rooms/x3y34z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
