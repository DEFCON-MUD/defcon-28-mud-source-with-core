inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 10, 7 }));
  set_short( "Corridor - x29y10z7" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y10z7.c",
  "east" : DIR+"/rooms/x30y10z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
