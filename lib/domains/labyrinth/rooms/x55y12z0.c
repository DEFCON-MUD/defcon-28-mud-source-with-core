inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 12, 0 }));
  set_short( "Corridor - x55y12z0" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y13z0.c",
  "south" : DIR+"/rooms/x55y11z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
