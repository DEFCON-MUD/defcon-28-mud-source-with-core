inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 14, 5 }));
  set_short( "Corridor - x14y14z5" );
set_objects( DIR+"/monsters/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y14z5.c",
  "east" : DIR+"/rooms/x15y14z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
