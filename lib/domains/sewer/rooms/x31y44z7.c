inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 44, 7 }));
  set_short( "Corridor - x31y44z7" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y45z7.c",
  "south" : DIR+"/rooms/x31y43z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
