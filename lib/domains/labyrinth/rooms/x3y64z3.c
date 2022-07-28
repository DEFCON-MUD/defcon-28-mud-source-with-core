inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 64, 3 }));
  set_short( "Passage - x3y64z3" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y64z3.c",
  "east" : DIR+"/rooms/x4y64z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
