inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 49, 4 }));
  set_short( "Corridor - x17y49z4" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y50z4.c",
  "south" : DIR+"/rooms/x17y48z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
