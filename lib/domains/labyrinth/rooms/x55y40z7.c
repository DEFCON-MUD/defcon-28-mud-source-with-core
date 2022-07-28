inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 40, 7 }));
  set_short( "Passage - x55y40z7" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y40z7.c",
  "north" : DIR+"/rooms/x55y41z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
