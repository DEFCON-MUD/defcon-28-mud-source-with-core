inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 14, 9 }));
  set_short( "Corridor - x51y14z9" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y14z9.c",
  "north" : DIR+"/rooms/x51y15z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
