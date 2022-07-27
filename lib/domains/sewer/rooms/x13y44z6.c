inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 44, 6 }));
  set_short( "Passage - x13y44z6" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y44z6.c",
  "south" : DIR+"/rooms/x13y43z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
