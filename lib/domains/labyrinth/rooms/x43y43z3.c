inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 43, 3 }));
  set_short( "Hallway - x43y43z3" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y44z3.c",
  "south" : DIR+"/rooms/x43y42z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
