inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 6, 7 }));
  set_short( "Corridor - x18y6z7" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y6z7.c",
  "east" : DIR+"/rooms/x19y6z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
