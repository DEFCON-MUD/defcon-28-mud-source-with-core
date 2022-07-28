inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 10, 0 }));
  set_short( "Hallway - x41y10z0" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y10z0.c",
  "north" : DIR+"/rooms/x41y11z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
