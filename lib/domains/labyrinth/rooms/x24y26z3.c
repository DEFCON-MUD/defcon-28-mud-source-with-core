inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 26, 3 }));
  set_short( "Passage - x24y26z3" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y26z3.c",
  "east" : DIR+"/rooms/x25y26z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
