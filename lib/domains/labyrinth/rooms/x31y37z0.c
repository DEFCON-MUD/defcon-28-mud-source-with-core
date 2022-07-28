inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 37, 0 }));
  set_short( "Corridor - x31y37z0" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y38z0.c",
  "south" : DIR+"/rooms/x31y36z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
