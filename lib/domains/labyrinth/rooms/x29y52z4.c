inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 52, 4 }));
  set_short( "Corridor - x29y52z4" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y53z4.c",
  "south" : DIR+"/rooms/x29y51z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
