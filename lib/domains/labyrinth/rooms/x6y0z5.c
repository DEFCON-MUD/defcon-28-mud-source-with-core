inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 0, 5 }));
  set_short( "Hallway - x6y0z5" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y0z5.c",
  "east" : DIR+"/rooms/x7y0z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
