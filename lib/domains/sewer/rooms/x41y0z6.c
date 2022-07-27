inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 0, 6 }));
  set_short( "Corridor - x41y0z6" );
set_objects( DIR+"/monsters/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y0z6.c",
  "east" : DIR+"/rooms/x42y0z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
