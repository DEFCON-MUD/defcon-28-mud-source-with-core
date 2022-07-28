inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 28, 7 }));
  set_short( "Corridor - x29y28z7" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y28z7.c",
  "east" : DIR+"/rooms/x30y28z7.c",
  "north" : DIR+"/rooms/x29y29z7.c",
  "south" : DIR+"/rooms/x29y27z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
