inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 14, 5 }));
  set_short( "Corridor - x31y14z5" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y14z5.c",
  "south" : DIR+"/rooms/x31y13z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
