inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 18, 4 }));
  set_short( "Corridor - x39y18z4" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y19z4.c",
  "south" : DIR+"/rooms/x39y17z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
