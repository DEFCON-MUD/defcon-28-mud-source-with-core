inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 24, 8 }));
  set_short( "Corridor - x54y24z8" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y24z8.c",
  "east" : DIR+"/rooms/x55y24z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
