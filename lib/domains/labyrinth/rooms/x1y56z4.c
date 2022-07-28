inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 56, 4 }));
  set_short( "Passage - x1y56z4" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y57z4.c",
  "south" : DIR+"/rooms/x1y55z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
