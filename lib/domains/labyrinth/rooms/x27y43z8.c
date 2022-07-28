inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 43, 8 }));
  set_short( "Hallway - x27y43z8" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y44z8.c",
  "south" : DIR+"/rooms/x27y42z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
