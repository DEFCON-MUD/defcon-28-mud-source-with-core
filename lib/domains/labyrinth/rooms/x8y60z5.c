inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 60, 5 }));
  set_short( "Passage - x8y60z5" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y60z5.c",
  "east" : DIR+"/rooms/x9y60z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
