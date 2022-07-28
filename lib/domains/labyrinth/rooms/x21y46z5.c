inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 46, 5 }));
  set_short( "Passage - x21y46z5" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y46z5.c",
  "east" : DIR+"/rooms/x22y46z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
