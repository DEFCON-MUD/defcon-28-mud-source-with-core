inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 58, 4 }));
  set_short( "Passage - x19y58z4" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y58z4.c",
  "east" : DIR+"/rooms/x20y58z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
