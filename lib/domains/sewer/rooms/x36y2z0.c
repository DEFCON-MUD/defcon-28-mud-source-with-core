inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 2, 0 }));
  set_short( "Hallway - x36y2z0" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y2z0.c",
  "east" : DIR+"/rooms/x37y2z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
