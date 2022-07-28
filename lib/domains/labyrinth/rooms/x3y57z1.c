inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 57, 1 }));
  set_short( "Corridor - x3y57z1" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y58z1.c",
  "south" : DIR+"/rooms/x3y56z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
