inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 35, 0 }));
  set_short( "Corridor - x17y35z0" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y36z0.c",
  "south" : DIR+"/rooms/x17y34z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
