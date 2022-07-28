inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 9, 2 }));
  set_short( "Passage - x49y9z2" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y10z2.c",
  "south" : DIR+"/rooms/x49y8z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
