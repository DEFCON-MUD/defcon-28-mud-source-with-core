inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 53, 1 }));
  set_short( "Corridor - x49y53z1" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y54z1.c",
  "south" : DIR+"/rooms/x49y52z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
