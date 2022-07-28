inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 5, 5 }));
  set_short( "Passage - x27y5z5" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y6z5.c",
  "south" : DIR+"/rooms/x27y4z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
