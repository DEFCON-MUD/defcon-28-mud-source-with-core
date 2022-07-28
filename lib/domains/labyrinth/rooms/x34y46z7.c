inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 46, 7 }));
  set_short( "Hallway - x34y46z7" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y46z7.c",
  "east" : DIR+"/rooms/x35y46z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
