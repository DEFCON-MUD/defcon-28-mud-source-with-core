inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 42, 9 }));
  set_short( "Passage - x37y42z9" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y43z9.c",
  "south" : DIR+"/rooms/x37y41z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
