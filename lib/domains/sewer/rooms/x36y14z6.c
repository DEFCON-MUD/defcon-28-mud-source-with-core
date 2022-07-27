inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 14, 6 }));
  set_short( "Corridor - x36y14z6" );
set_objects( DIR+"/monsters/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y14z6.c",
  "east" : DIR+"/rooms/x37y14z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
