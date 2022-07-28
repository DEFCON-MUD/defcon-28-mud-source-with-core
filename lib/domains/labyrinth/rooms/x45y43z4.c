inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 43, 4 }));
  set_short( "Passage - x45y43z4" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y44z4.c",
  "south" : DIR+"/rooms/x45y42z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
