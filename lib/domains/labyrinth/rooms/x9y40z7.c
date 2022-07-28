inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 40, 7 }));
  set_short( "Corridor - x9y40z7" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y40z7.c",
  "south" : DIR+"/rooms/x9y39z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
