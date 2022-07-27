inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 24, 2 }));
  set_short( "Passage - x11y24z2" );
set_objects( DIR+"/monsters/vlarapp.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y24z2.c",
  "north" : DIR+"/rooms/x11y25z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
