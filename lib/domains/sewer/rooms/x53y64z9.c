inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 64, 9 }));
  set_short( "Hallway - x53y64z9" );
set_objects( DIR+"/monsters/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y64z9.c",
  "east" : DIR+"/rooms/x54y64z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
