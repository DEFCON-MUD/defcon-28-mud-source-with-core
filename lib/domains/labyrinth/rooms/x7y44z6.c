inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 44, 6 }));
  set_short( "Corridor - x7y44z6" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y44z6.c",
  "north" : DIR+"/rooms/x7y45z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
