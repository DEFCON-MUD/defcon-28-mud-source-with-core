inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 22, 9 }));
  set_short( "Passage - x44y22z9" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y22z9.c",
  "east" : DIR+"/rooms/x45y22z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
