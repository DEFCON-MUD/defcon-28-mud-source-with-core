inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 38, 6 }));
  set_short( "Passage - x24y38z6" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y38z6.c",
  "east" : DIR+"/rooms/x25y38z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
