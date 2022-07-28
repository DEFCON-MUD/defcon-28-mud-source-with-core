inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 43, 1 }));
  set_short( "Passage - x7y43z1" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y44z1.c",
  "south" : DIR+"/rooms/x7y42z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
