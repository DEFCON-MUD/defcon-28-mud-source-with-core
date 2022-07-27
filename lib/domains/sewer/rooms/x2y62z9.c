inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 62, 9 }));
  set_short( "Corridor - x2y62z9" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y62z9.c",
  "east" : DIR+"/rooms/x3y62z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
