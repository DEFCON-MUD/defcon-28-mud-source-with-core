inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 47, 9 }));
  set_short( "Corridor - x31y47z9" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y48z9.c",
  "south" : DIR+"/rooms/x31y46z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
