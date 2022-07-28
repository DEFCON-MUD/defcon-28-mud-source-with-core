inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 14, 8 }));
  set_short( "Corridor - x33y14z8" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y14z8.c",
  "south" : DIR+"/rooms/x33y13z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
