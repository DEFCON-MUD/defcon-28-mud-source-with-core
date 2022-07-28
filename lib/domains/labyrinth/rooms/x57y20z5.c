inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 20, 5 }));
  set_short( "Passage - x57y20z5" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y20z5.c",
  "south" : DIR+"/rooms/x57y19z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
