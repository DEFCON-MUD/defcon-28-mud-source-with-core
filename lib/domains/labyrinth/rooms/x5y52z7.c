inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 52, 7 }));
  set_short( "Passage - x5y52z7" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y52z7.c",
  "east" : DIR+"/rooms/x6y52z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
