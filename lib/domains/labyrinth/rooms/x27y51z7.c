inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 51, 7 }));
  set_short( "Hallway - x27y51z7" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y52z7.c",
  "south" : DIR+"/rooms/x27y50z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
