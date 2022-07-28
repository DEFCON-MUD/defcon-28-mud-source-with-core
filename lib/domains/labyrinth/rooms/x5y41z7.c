inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 41, 7 }));
  set_short( "Hallway - x5y41z7" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y42z7.c",
  "south" : DIR+"/rooms/x5y40z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
