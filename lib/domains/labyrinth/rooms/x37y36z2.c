inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 36, 2 }));
  set_short( "Passage - x37y36z2" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y37z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north.%^RESET%^");
}
