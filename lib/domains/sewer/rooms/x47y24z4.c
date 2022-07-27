inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 24, 4 }));
  set_short( "Corridor - x47y24z4" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y24z4.c",
  "south" : DIR+"/rooms/x47y23z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
