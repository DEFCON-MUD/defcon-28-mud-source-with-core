inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 12, 5 }));
  set_short( "Hallway - x59y12z5" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y12z5.c",
  "north" : DIR+"/rooms/x59y13z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
