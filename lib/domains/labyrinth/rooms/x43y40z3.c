inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 40, 3 }));
  set_short( "Corridor - x43y40z3" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y40z3.c",
  "east" : DIR+"/rooms/x44y40z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
