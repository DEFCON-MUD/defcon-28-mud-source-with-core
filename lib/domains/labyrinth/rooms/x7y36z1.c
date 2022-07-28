inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 36, 1 }));
  set_short( "Passage - x7y36z1" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y36z1.c",
  "east" : DIR+"/rooms/x8y36z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
