inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 8, 6 }));
  set_short( "Passage - x55y8z6" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y9z6.c",
  "south" : DIR+"/rooms/x55y7z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
