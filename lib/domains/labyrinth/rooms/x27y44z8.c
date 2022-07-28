inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 44, 8 }));
  set_short( "Passage - x27y44z8" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y45z8.c",
  "south" : DIR+"/rooms/x27y43z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
