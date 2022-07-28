inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 4, 3 }));
  set_short( "Passage - x49y4z3" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y4z3.c",
  "east" : DIR+"/rooms/x50y4z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
