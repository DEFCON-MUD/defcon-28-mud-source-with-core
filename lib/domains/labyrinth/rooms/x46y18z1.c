inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 18, 1 }));
  set_short( "Hallway - x46y18z1" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y18z1.c",
  "east" : DIR+"/rooms/x47y18z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
