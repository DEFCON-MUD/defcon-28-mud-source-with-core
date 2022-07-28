inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 40, 4 }));
  set_short( "Hallway - x39y40z4" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y40z4.c",
  "east" : DIR+"/rooms/x40y40z4.c",
  "south" : DIR+"/rooms/x39y39z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
