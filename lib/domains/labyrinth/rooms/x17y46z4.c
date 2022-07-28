inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 46, 4 }));
  set_short( "Hallway - x17y46z4" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y46z4.c",
  "south" : DIR+"/rooms/x17y45z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
