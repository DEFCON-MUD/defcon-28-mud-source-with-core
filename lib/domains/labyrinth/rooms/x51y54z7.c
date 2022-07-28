inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 54, 7 }));
  set_short( "Corridor - x51y54z7" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y54z7.c",
  "south" : DIR+"/rooms/x51y53z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
