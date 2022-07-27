inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 26, 0 }));
  set_short( "Passage - x37y26z0" );
set_objects( DIR+"/monsters/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y27z0.c",
  "south" : DIR+"/rooms/x37y25z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
