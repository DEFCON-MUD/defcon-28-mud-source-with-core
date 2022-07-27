inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 32, 5 }));
  set_short( "Hallway - x59y32z5" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y33z5.c",
  "south" : DIR+"/rooms/x59y31z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
