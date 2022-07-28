inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 57, 5 }));
  set_short( "Passage - x17y57z5" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y58z5.c",
  "south" : DIR+"/rooms/x17y56z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
