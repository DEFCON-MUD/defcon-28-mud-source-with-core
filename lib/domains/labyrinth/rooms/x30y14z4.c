inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 14, 4 }));
  set_short( "Hallway - x30y14z4" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y14z4.c",
  "east" : DIR+"/rooms/x31y14z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
