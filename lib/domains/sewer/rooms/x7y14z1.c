inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 14, 1 }));
  set_short( "Passage - x7y14z1" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y14z1.c",
  "south" : DIR+"/rooms/x7y13z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
