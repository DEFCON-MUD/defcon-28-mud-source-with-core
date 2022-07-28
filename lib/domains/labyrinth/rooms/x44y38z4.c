inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 38, 4 }));
  set_short( "Hallway - x44y38z4" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y38z4.c",
  "east" : DIR+"/rooms/x45y38z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
