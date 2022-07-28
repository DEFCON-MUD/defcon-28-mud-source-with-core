inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 44, 9 }));
  set_short( "Hallway - x25y44z9" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y44z9.c",
  "south" : DIR+"/rooms/x25y43z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
