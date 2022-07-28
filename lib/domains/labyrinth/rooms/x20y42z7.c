inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 42, 7 }));
  set_short( "Corridor - x20y42z7" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y42z7.c",
  "east" : DIR+"/rooms/x21y42z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
