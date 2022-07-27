inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 52, 6 }));
  set_short( "Corridor - x55y52z6" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y52z6.c",
  "south" : DIR+"/rooms/x55y51z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
