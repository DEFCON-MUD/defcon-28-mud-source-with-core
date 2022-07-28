inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 11, 0 }));
  set_short( "Passage - x17y11z0" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y12z0.c",
  "south" : DIR+"/rooms/x17y10z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
