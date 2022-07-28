inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 18, 4 }));
  set_short( "Passage - x46y18z4" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y18z4.c",
  "east" : DIR+"/rooms/x47y18z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
