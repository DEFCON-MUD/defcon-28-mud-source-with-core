inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 17, 0 }));
  set_short( "Corridor - x57y17z0" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y18z0.c",
  "south" : DIR+"/rooms/x57y16z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
