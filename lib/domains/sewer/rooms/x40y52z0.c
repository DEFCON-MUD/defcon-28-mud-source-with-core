inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 52, 0 }));
  set_short( "Passage - x40y52z0" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y52z0.c",
  "east" : DIR+"/rooms/x41y52z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
