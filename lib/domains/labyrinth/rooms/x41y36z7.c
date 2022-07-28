inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 36, 7 }));
  set_short( "Corridor - x41y36z7" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y36z7.c",
  "north" : DIR+"/rooms/x41y37z7.c",
  "south" : DIR+"/rooms/x41y35z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
