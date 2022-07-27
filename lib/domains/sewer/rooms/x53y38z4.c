inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 38, 4 }));
  set_short( "Corridor - x53y38z4" );
set_objects( DIR+"/monsters/rattlesnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y38z4.c",
  "south" : DIR+"/rooms/x53y37z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
