inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 34, 5 }));
  set_short( "Passage - x42y34z5" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y34z5.c",
  "east" : DIR+"/rooms/x43y34z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
