inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 44, 3 }));
  set_short( "Hallway - x11y44z3" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y45z3.c",
  "south" : DIR+"/rooms/x11y43z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
