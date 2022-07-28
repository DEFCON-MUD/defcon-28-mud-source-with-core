inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 40, 1 }));
  set_short( "Corridor - x46y40z1" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y40z1.c",
  "east" : DIR+"/rooms/x47y40z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
