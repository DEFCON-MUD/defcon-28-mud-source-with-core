inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 7, 0 }));
  set_short( "Corridor - x43y7z0" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y8z0.c",
  "south" : DIR+"/rooms/x43y6z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
