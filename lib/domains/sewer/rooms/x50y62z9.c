inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 62, 9 }));
  set_short( "Passage - x50y62z9" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y62z9.c",
  "east" : DIR+"/rooms/x51y62z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
