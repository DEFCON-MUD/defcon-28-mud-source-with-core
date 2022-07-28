inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 51, 8 }));
  set_short( "Passage - x19y51z8" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y52z8.c",
  "south" : DIR+"/rooms/x19y50z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
