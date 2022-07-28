inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 64, 2 }));
  set_short( "Corridor - x55y64z2" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y64z2.c",
  "east" : DIR+"/rooms/x56y64z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
