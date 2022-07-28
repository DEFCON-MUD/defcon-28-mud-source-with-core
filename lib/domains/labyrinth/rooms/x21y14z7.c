inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 14, 7 }));
  set_short( "Corridor - x21y14z7" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y14z7.c",
  "south" : DIR+"/rooms/x21y13z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
