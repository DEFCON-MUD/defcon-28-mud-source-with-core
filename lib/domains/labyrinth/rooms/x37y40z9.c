inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 40, 9 }));
  set_short( "Passage - x37y40z9" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y40z9.c",
  "north" : DIR+"/rooms/x37y41z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
