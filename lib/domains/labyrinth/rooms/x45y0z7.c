inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 0, 7 }));
  set_short( "Passage - x45y0z7" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y0z7.c",
  "east" : DIR+"/rooms/x46y0z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
