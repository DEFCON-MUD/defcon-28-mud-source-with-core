inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 14, 2 }));
  set_short( "Corridor - x33y14z2" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y14z2.c",
  "east" : DIR+"/rooms/x34y14z2.c",
  "south" : DIR+"/rooms/x33y13z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
