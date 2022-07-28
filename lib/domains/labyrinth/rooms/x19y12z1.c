inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 12, 1 }));
  set_short( "Corridor - x19y12z1" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y12z1.c",
  "east" : DIR+"/rooms/x20y12z1.c",
  "north" : DIR+"/rooms/x19y13z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
