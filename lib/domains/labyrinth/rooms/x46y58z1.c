inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 58, 1 }));
  set_short( "Corridor - x46y58z1" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y58z1.c",
  "east" : DIR+"/rooms/x47y58z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
