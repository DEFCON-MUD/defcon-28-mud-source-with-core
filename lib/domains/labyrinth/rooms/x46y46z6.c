inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 46, 6 }));
  set_short( "Hallway - x46y46z6" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y46z6.c",
  "east" : DIR+"/rooms/x47y46z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
