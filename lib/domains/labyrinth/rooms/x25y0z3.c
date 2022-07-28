inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 0, 3 }));
  set_short( "Passage - x25y0z3" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y0z3.c",
  "east" : DIR+"/rooms/x26y0z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
