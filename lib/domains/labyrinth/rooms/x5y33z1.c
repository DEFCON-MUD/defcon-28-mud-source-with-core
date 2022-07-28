inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 33, 1 }));
  set_short( "Passage - x5y33z1" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y34z1.c",
  "south" : DIR+"/rooms/x5y32z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
