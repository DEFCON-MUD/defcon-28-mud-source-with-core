inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 0, 5 }));
  set_short( "Corridor - x46y0z5" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y0z5.c",
  "east" : DIR+"/rooms/x47y0z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
