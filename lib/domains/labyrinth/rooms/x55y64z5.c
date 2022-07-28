inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 64, 5 }));
  set_short( "Passage - x55y64z5" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y64z5.c",
  "east" : DIR+"/rooms/x56y64z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
