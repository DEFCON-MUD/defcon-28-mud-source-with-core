inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 36, 8 }));
  set_short( "Hallway - x53y36z8" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y36z8.c",
  "south" : DIR+"/rooms/x53y35z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
