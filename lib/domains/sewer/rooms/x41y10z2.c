inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 10, 2 }));
  set_short( "Passage - x41y10z2" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y10z2.c",
  "north" : DIR+"/rooms/x41y11z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
