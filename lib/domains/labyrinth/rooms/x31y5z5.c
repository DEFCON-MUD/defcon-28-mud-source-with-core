inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 5, 5 }));
  set_short( "Corridor - x31y5z5" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y6z5.c",
  "south" : DIR+"/rooms/x31y4z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
