inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 60, 8 }));
  set_short( "Corridor - x61y60z8" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y61z8.c",
  "south" : DIR+"/rooms/x61y59z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
