inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 62, 0 }));
  set_short( "Corridor - x30y62z0" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y62z0.c",
  "east" : DIR+"/rooms/x31y62z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
