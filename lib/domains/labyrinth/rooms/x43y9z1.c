inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 9, 1 }));
  set_short( "Passage - x43y9z1" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y10z1.c",
  "south" : DIR+"/rooms/x43y8z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
