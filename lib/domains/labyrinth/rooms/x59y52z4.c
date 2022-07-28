inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 52, 4 }));
  set_short( "Corridor - x59y52z4" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y52z4.c",
  "north" : DIR+"/rooms/x59y53z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the radioactive waste in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
