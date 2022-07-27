inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 24, 0 }));
  set_short( "Passage - x9y24z0" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y24z0.c",
  "south" : DIR+"/rooms/x9y23z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
