inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 60, 5 }));
  set_short( "Passage - x43y60z5" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y60z5.c",
  "south" : DIR+"/rooms/x43y59z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
