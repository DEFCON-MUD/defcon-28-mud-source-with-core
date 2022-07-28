inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 46, 9 }));
  set_short( "Corridor - x7y46z9" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y46z9.c",
  "south" : DIR+"/rooms/x7y45z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
