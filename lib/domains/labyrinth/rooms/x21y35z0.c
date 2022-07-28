inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 35, 0 }));
  set_short( "Corridor - x21y35z0" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y36z0.c",
  "south" : DIR+"/rooms/x21y34z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
