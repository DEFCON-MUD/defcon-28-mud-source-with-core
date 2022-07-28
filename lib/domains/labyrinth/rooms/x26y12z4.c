inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 12, 4 }));
  set_short( "Hallway - x26y12z4" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y12z4.c",
  "east" : DIR+"/rooms/x27y12z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
