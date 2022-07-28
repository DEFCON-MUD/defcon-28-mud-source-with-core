inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 8, 7 }));
  set_short( "Passage - x53y8z7" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y8z7.c",
  "east" : DIR+"/rooms/x54y8z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
