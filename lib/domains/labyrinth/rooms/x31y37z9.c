inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 37, 9 }));
  set_short( "Hallway - x31y37z9" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y38z9.c",
  "south" : DIR+"/rooms/x31y36z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
