inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 22, 8 }));
  set_short( "Hallway - x5y22z8" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y22z8.c",
  "north" : DIR+"/rooms/x5y23z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crappy sales material in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
