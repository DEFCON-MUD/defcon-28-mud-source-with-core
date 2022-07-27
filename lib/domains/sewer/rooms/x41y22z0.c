inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 22, 0 }));
  set_short( "Hallway - x41y22z0" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y22z0.c",
  "south" : DIR+"/rooms/x41y21z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
