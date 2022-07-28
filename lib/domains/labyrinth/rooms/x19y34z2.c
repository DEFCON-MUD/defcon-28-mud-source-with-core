inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 34, 2 }));
  set_short( "Corridor - x19y34z2" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y34z2.c",
  "north" : DIR+"/rooms/x19y35z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
