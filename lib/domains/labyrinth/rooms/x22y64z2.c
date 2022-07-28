inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 64, 2 }));
  set_short( "Corridor - x22y64z2" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y64z2.c",
  "east" : DIR+"/rooms/x23y64z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
