inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 40, 0 }));
  set_short( "Hallway - x51y40z0" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y40z0.c",
  "east" : DIR+"/rooms/x52y40z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
