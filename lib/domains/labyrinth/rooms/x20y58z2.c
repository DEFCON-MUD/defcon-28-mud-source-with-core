inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 58, 2 }));
  set_short( "Hallway - x20y58z2" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y58z2.c",
  "east" : DIR+"/rooms/x21y58z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
