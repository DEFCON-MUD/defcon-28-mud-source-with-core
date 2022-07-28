inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 45, 4 }));
  set_short( "Hallway - x13y45z4" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y46z4.c",
  "south" : DIR+"/rooms/x13y44z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
