inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 32, 8 }));
  set_short( "Hallway - x53y32z8" );
set_objects( DIR+"/monsters/grunt.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y32z8.c",
  "south" : DIR+"/rooms/x53y31z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
