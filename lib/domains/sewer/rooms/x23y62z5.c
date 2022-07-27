inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 62, 5 }));
  set_short( "Corridor - x23y62z5" );
set_objects( DIR+"/monsters/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y62z5.c",
  "east" : DIR+"/rooms/x24y62z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
