inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 4, 1 }));
  set_short( "Hallway - x9y4z1" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y4z1.c",
  "south" : DIR+"/rooms/x9y3z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
