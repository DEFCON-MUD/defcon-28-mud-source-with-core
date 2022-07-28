inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 52, 4 }));
  set_short( "Corridor - x46y52z4" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y52z4.c",
  "east" : DIR+"/rooms/x47y52z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
