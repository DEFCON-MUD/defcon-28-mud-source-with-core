inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 48, 6 }));
  set_short( "Hallway - x12y48z6" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y48z6.c",
  "east" : DIR+"/rooms/x13y48z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
