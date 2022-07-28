inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 10, 0 }));
  set_short( "Hallway - x48y10z0" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y10z0.c",
  "east" : DIR+"/rooms/x49y10z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
