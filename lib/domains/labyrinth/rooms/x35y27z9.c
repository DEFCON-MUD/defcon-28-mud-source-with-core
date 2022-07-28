inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 27, 9 }));
  set_short( "Hallway - x35y27z9" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y28z9.c",
  "south" : DIR+"/rooms/x35y26z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
