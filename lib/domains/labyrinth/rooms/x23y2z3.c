inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 2, 3 }));
  set_short( "Passage - x23y2z3" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y2z3.c",
  "north" : DIR+"/rooms/x23y3z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
