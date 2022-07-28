inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 36, 4 }));
  set_short( "Passage - x7y36z4" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y36z4.c",
  "south" : DIR+"/rooms/x7y35z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
