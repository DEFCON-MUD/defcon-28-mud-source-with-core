inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 42, 1 }));
  set_short( "Hallway - x16y42z1" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y42z1.c",
  "east" : DIR+"/rooms/x17y42z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
