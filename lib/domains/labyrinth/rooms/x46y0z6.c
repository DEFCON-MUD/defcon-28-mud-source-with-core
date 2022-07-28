inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 0, 6 }));
  set_short( "Passage - x46y0z6" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y0z6.c",
  "east" : DIR+"/rooms/x47y0z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
