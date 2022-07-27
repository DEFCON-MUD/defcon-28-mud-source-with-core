inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 12, 1 }));
  set_short( "Corridor - x54y12z1" );
set_objects( DIR+"/monsters/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y12z1.c",
  "east" : DIR+"/rooms/x55y12z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
