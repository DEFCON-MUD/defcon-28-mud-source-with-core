inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 54, 7 }));
  set_short( "Passage - x25y54z7" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y55z7.c",
  "south" : DIR+"/rooms/x25y53z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
