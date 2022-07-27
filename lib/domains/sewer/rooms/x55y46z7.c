inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 46, 7 }));
  set_short( "Corridor - x55y46z7" );
set_objects( DIR+"/monsters/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y46z7.c",
  "south" : DIR+"/rooms/x55y45z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
