inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 34, 0 }));
  set_short( "Corridor - x44y34z0" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y34z0.c",
  "east" : DIR+"/rooms/x45y34z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
