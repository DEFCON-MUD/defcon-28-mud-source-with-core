inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 16, 7 }));
  set_short( "Hallway - x37y16z7" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y17z7.c",
  "south" : DIR+"/rooms/x37y15z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
