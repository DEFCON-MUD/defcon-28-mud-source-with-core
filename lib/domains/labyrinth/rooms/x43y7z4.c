inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 7, 4 }));
  set_short( "Passage - x43y7z4" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y8z4.c",
  "south" : DIR+"/rooms/x43y6z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
