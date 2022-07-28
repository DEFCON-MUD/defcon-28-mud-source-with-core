inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 44, 8 }));
  set_short( "Hallway - x11y44z8" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y44z8.c",
  "north" : DIR+"/rooms/x11y45z8.c",
  "south" : DIR+"/rooms/x11y43z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
