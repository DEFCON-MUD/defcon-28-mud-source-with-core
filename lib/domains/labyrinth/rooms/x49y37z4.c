inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 37, 4 }));
  set_short( "Corridor - x49y37z4" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y38z4.c",
  "south" : DIR+"/rooms/x49y36z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
