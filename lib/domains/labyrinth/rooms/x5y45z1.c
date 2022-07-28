inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 45, 1 }));
  set_short( "Hallway - x5y45z1" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y46z1.c",
  "south" : DIR+"/rooms/x5y44z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
