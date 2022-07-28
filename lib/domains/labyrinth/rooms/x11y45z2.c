inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 45, 2 }));
  set_short( "Corridor - x11y45z2" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y46z2.c",
  "south" : DIR+"/rooms/x11y44z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crappy sales material in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
