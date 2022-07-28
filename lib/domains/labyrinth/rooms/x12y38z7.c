inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 38, 7 }));
  set_short( "Passage - x12y38z7" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y38z7.c",
  "east" : DIR+"/rooms/x13y38z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
