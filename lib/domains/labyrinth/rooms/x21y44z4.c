inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 44, 4 }));
  set_short( "Corridor - x21y44z4" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y44z4.c",
  "south" : DIR+"/rooms/x21y43z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
