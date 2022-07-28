inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 22, 5 }));
  set_short( "Corridor - x41y22z5" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y22z5.c",
  "north" : DIR+"/rooms/x41y23z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
