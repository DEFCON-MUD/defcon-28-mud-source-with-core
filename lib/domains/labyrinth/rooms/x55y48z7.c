inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 48, 7 }));
  set_short( "Corridor - x55y48z7" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y48z7.c",
  "north" : DIR+"/rooms/x55y49z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
