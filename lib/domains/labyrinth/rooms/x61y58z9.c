inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 58, 9 }));
  set_short( "Corridor - x61y58z9" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y59z9.c",
  "south" : DIR+"/rooms/x61y57z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
