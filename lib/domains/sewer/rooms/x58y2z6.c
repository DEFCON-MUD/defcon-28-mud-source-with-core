inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 2, 6 }));
  set_short( "Hallway - x58y2z6" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y2z6.c",
  "east" : DIR+"/rooms/x59y2z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
