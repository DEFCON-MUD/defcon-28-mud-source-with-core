inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 18, 1 }));
  set_short( "Hallway - x6y18z1" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y18z1.c",
  "east" : DIR+"/rooms/x7y18z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
