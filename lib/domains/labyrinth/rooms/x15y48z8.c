inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 48, 8 }));
  set_short( "Corridor - x15y48z8" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y49z8.c",
  "south" : DIR+"/rooms/x15y47z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
