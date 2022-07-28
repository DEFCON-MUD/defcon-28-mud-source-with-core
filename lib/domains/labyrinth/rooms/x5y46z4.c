inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 46, 4 }));
  set_short( "Passage - x5y46z4" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y46z4.c",
  "east" : DIR+"/rooms/x6y46z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
