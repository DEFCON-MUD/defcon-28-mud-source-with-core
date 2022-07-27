inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 58, 4 }));
  set_short( "Hallway - x2y58z4" );
set_objects( DIR+"/monsters/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y58z4.c",
  "east" : DIR+"/rooms/x3y58z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
