inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 5, 9 }));
  set_short( "Passage - x13y5z9" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y6z9.c",
  "south" : DIR+"/rooms/x13y4z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
