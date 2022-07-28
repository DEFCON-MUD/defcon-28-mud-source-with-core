inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 8, 7 }));
  set_short( "Hallway - x42y8z7" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y8z7.c",
  "east" : DIR+"/rooms/x43y8z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
