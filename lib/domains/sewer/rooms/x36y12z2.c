inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 12, 2 }));
  set_short( "Hallway - x36y12z2" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y12z2.c",
  "east" : DIR+"/rooms/x37y12z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
