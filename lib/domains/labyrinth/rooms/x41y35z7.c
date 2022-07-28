inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 35, 7 }));
  set_short( "Corridor - x41y35z7" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y36z7.c",
  "south" : DIR+"/rooms/x41y34z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the radioactive waste in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
