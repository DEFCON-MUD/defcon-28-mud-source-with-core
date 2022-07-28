inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 8, 8 }));
  set_short( "Corridor - x18y8z8" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y8z8.c",
  "east" : DIR+"/rooms/x19y8z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
