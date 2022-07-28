inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 40, 1 }));
  set_short( "Corridor - x31y40z1" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y41z1.c",
  "south" : DIR+"/rooms/x31y39z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
