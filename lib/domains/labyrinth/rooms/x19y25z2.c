inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 25, 2 }));
  set_short( "Hallway - x19y25z2" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y26z2.c",
  "south" : DIR+"/rooms/x19y24z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
