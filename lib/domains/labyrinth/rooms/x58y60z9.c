inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 60, 9 }));
  set_short( "Hallway - x58y60z9" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y60z9.c",
  "east" : DIR+"/rooms/x59y60z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
