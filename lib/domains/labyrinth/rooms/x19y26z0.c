inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 26, 0 }));
  set_short( "Hallway - x19y26z0" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y27z0.c",
  "south" : DIR+"/rooms/x19y25z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
