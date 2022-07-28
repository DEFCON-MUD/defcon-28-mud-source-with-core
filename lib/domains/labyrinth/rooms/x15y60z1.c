inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 60, 1 }));
  set_short( "Passage - x15y60z1" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y60z1.c",
  "south" : DIR+"/rooms/x15y59z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
