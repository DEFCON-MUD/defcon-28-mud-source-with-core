inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 58, 6 }));
  set_short( "Hallway - x56y58z6" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y58z6.c",
  "east" : DIR+"/rooms/x57y58z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
