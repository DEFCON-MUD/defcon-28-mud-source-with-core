inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 0, 8 }));
  set_short( "Passage - x52y0z8" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y0z8.c",
  "east" : DIR+"/rooms/x53y0z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
