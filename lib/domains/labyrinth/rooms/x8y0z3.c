inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 0, 3 }));
  set_short( "Passage - x8y0z3" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y0z3.c",
  "east" : DIR+"/rooms/x9y0z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
