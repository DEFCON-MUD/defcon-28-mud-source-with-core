inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 40, 7 }));
  set_short( "Passage - x38y40z7" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y40z7.c",
  "east" : DIR+"/rooms/x39y40z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
