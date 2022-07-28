inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 42, 4 }));
  set_short( "Passage - x1y42z4" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y42z4.c",
  "north" : DIR+"/rooms/x1y43z4.c",
  "south" : DIR+"/rooms/x1y41z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
