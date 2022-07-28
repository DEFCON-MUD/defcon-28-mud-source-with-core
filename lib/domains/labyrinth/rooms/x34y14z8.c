inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 14, 8 }));
  set_short( "Hallway - x34y14z8" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y14z8.c",
  "east" : DIR+"/rooms/x35y14z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
