inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 3, 9 }));
  set_short( "Passage - x61y3z9" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y4z9.c",
  "south" : DIR+"/rooms/x61y2z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
