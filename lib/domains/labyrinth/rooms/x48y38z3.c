inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 38, 3 }));
  set_short( "Hallway - x48y38z3" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y38z3.c",
  "east" : DIR+"/rooms/x49y38z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
