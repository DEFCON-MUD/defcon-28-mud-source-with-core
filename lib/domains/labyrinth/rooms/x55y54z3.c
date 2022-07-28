inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 54, 3 }));
  set_short( "Passage - x55y54z3" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y55z3.c",
  "south" : DIR+"/rooms/x55y53z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
