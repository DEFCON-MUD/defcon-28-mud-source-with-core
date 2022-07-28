inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 6, 7 }));
  set_short( "Hallway - x7y6z7" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y7z7.c",
  "south" : DIR+"/rooms/x7y5z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
