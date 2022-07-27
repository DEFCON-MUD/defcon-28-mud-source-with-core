inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 64, 6 }));
  set_short( "Passage - x14y64z6" );
set_objects( DIR+"/monsters/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y64z6.c",
  "east" : DIR+"/rooms/x15y64z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
