inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 7, 3 }));
  set_short( "Corridor - x19y7z3" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y8z3.c",
  "south" : DIR+"/rooms/x19y6z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
