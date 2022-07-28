inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 5, 5 }));
  set_short( "Hallway - x9y5z5" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y6z5.c",
  "south" : DIR+"/rooms/x9y4z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
