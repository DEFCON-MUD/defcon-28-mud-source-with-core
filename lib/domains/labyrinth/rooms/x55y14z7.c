inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 14, 7 }));
  set_short( "Corridor - x55y14z7" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y14z7.c",
  "east" : DIR+"/rooms/x56y14z7.c",
  "south" : DIR+"/rooms/x55y13z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
