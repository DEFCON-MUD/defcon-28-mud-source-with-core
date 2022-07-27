inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 36, 0 }));
  set_short( "Hallway - x7y36z0" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y37z0.c",
  "south" : DIR+"/rooms/x7y35z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
