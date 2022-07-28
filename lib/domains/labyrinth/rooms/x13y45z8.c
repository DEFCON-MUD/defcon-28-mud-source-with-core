inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 45, 8 }));
  set_short( "Corridor - x13y45z8" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y46z8.c",
  "south" : DIR+"/rooms/x13y44z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
