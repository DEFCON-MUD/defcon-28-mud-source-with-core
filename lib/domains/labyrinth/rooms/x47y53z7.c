inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 53, 7 }));
  set_short( "Passage - x47y53z7" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y54z7.c",
  "south" : DIR+"/rooms/x47y52z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
