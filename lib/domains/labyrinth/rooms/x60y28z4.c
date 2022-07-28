inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 28, 4 }));
  set_short( "Hallway - x60y28z4" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y28z4.c",
  "east" : DIR+"/rooms/x61y28z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
