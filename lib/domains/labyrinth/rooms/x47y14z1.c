inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 14, 1 }));
  set_short( "Corridor - x47y14z1" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y15z1.c",
  "south" : DIR+"/rooms/x47y13z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
