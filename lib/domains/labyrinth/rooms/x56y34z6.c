inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 34, 6 }));
  set_short( "Corridor - x56y34z6" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y34z6.c",
  "east" : DIR+"/rooms/x57y34z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
