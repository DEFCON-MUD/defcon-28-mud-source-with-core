inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 41, 1 }));
  set_short( "Corridor - x29y41z1" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y42z1.c",
  "south" : DIR+"/rooms/x29y40z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
