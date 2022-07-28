inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 50, 7 }));
  set_short( "Corridor - x28y50z7" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y50z7.c",
  "east" : DIR+"/rooms/x29y50z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
