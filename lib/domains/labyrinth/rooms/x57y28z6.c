inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 28, 6 }));
  set_short( "Corridor - x57y28z6" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y28z6.c",
  "east" : DIR+"/rooms/x58y28z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
