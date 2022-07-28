inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 8, 4 }));
  set_short( "Hallway - x21y8z4" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y8z4.c",
  "east" : DIR+"/rooms/x22y8z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
