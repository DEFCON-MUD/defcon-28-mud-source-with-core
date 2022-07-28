inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 16, 5 }));
  set_short( "Hallway - x47y16z5" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y16z5.c",
  "south" : DIR+"/rooms/x47y15z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
