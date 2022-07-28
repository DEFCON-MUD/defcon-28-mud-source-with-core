inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 44, 1 }));
  set_short( "Corridor - x45y44z1" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y44z1.c",
  "south" : DIR+"/rooms/x45y43z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crappy sales material in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
