inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 15, 5 }));
  set_short( "Hallway - x51y15z5" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y16z5.c",
  "south" : DIR+"/rooms/x51y14z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
