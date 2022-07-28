inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 44, 5 }));
  set_short( "Passage - x21y44z5" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y44z5.c",
  "south" : DIR+"/rooms/x21y43z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
