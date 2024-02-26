inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 36, 9 }));
  set_short( "Passage - x55y36z9" );
set_objects( DIR+"/monsters/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y36z9.c",
  "east" : DIR+"/rooms/x56y36z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
