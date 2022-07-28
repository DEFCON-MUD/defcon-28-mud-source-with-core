inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 46, 7 }));
  set_short( "Hallway - x7y46z7" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y46z7.c",
  "north" : DIR+"/rooms/x7y47z7.c",
  "south" : DIR+"/rooms/x7y45z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
