inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 11, 2 }));
  set_short( "Hallway - x19y11z2" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y12z2.c",
  "south" : DIR+"/rooms/x19y10z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
