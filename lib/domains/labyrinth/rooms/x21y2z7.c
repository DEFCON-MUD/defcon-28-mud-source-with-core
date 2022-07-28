inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 2, 7 }));
  set_short( "Passage - x21y2z7" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y2z7.c",
  "east" : DIR+"/rooms/x22y2z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
