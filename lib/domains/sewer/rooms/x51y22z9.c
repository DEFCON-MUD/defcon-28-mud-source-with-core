inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 22, 9 }));
  set_short( "Hallway - x51y22z9" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y22z9.c",
  "north" : DIR+"/rooms/x51y23z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
