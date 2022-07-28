inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 43, 2 }));
  set_short( "Corridor - x51y43z2" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y44z2.c",
  "south" : DIR+"/rooms/x51y42z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
