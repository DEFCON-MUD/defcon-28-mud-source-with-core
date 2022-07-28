inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 15, 9 }));
  set_short( "Hallway - x13y15z9" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y16z9.c",
  "south" : DIR+"/rooms/x13y14z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
