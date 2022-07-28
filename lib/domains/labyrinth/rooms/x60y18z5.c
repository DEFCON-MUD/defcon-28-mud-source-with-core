inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 18, 5 }));
  set_short( "Corridor - x60y18z5" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y18z5.c",
  "east" : DIR+"/rooms/x61y18z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
