inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 24, 0 }));
  set_short( "Passage - x49y24z0" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y24z0.c",
  "north" : DIR+"/rooms/x49y25z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
