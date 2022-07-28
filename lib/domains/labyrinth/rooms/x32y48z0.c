inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 48, 0 }));
  set_short( "Corridor - x32y48z0" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y48z0.c",
  "east" : DIR+"/rooms/x33y48z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
