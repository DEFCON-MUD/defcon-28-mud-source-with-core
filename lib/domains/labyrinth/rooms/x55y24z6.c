inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 24, 6 }));
  set_short( "Hallway - x55y24z6" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y24z6.c",
  "north" : DIR+"/rooms/x55y25z6.c",
  "south" : DIR+"/rooms/x55y23z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
