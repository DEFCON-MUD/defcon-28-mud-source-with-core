inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 28, 5 }));
  set_short( "Hallway - x33y28z5" );
set_objects( DIR+"/monsters/greensnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y28z5.c",
  "north" : DIR+"/rooms/x33y29z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
