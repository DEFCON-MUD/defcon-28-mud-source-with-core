inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 54, 7 }));
  set_short( "Passage - x19y54z7" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y54z7.c",
  "south" : DIR+"/rooms/x19y53z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
