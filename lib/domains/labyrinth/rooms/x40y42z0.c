inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 42, 0 }));
  set_short( "Passage - x40y42z0" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y42z0.c",
  "east" : DIR+"/rooms/x41y42z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
