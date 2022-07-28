inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 28, 7 }));
  set_short( "Corridor - x39y28z7" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y28z7.c",
  "south" : DIR+"/rooms/x39y27z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
