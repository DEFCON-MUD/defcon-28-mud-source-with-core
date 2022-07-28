inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 24, 4 }));
  set_short( "Hallway - x57y24z4" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y24z4.c",
  "north" : DIR+"/rooms/x57y25z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
