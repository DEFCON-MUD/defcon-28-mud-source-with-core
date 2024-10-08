inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 28, 7 }));
  set_short( "Hallway - x54y28z7" );
set_objects( DIR+"/monsters/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y28z7.c",
  "east" : DIR+"/rooms/x55y28z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
