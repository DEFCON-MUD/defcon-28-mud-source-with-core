inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 48, 3 }));
  set_short( "Hallway - x11y48z3" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y48z3.c",
  "east" : DIR+"/rooms/x12y48z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
