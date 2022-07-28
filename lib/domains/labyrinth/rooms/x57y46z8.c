inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 46, 8 }));
  set_short( "Corridor - x57y46z8" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y47z8.c",
  "south" : DIR+"/rooms/x57y45z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
