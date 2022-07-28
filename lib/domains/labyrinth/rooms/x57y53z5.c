inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 53, 5 }));
  set_short( "Passage - x57y53z5" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y54z5.c",
  "south" : DIR+"/rooms/x57y52z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
