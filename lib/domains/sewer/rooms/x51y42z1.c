inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 42, 1 }));
  set_short( "Corridor - x51y42z1" );
set_objects( DIR+"/monsters/poledaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y42z1.c",
  "south" : DIR+"/rooms/x51y41z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
