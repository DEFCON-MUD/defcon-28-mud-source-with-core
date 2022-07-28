inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 23, 9 }));
  set_short( "Corridor - x17y23z9" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y24z9.c",
  "south" : DIR+"/rooms/x17y22z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
