inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 18, 8 }));
  set_short( "Passage - x7y18z8" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y19z8.c",
  "south" : DIR+"/rooms/x7y17z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
