inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 47, 5 }));
  set_short( "Corridor - x55y47z5" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y48z5.c",
  "south" : DIR+"/rooms/x55y46z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
