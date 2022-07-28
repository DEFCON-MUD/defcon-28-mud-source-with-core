inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 54, 2 }));
  set_short( "Hallway - x7y54z2" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y54z2.c",
  "east" : DIR+"/rooms/x8y54z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
