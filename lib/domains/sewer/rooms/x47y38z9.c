inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 38, 9 }));
  set_short( "Hallway - x47y38z9" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y38z9.c",
  "north" : DIR+"/rooms/x47y39z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
