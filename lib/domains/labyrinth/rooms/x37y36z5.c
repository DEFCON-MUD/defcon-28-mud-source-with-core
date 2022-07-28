inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 36, 5 }));
  set_short( "Corridor - x37y36z5" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "south" : DIR+"/rooms/x37y35z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
