inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 42, 2 }));
  set_short( "Hallway - x45y42z2" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y42z2.c",
  "east" : DIR+"/rooms/x46y42z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
