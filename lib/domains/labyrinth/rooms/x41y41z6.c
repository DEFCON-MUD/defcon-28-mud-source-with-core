inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 41, 6 }));
  set_short( "Passage - x41y41z6" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y42z6.c",
  "south" : DIR+"/rooms/x41y40z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
