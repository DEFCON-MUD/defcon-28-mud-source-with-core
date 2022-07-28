inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 46, 6 }));
  set_short( "Corridor - x41y46z6" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y46z6.c",
  "east" : DIR+"/rooms/x42y46z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
