inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 34, 4 }));
  set_short( "Corridor - x53y34z4" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y34z4.c",
  "east" : DIR+"/rooms/x54y34z4.c",
  "south" : DIR+"/rooms/x53y33z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
