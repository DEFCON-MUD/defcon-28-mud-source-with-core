inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 56, 4 }));
  set_short( "Passage - x35y56z4" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y56z4.c",
  "north" : DIR+"/rooms/x35y57z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
