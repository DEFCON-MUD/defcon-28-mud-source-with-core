inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 44, 4 }));
  set_short( "Corridor - x9y44z4" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y44z4.c",
  "east" : DIR+"/rooms/x10y44z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
