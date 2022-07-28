inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 52, 9 }));
  set_short( "Corridor - x28y52z9" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y52z9.c",
  "east" : DIR+"/rooms/x29y52z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
