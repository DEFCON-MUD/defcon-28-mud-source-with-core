inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 60, 1 }));
  set_short( "Hallway - x51y60z1" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y60z1.c",
  "south" : DIR+"/rooms/x51y59z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
