inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 16, 1 }));
  set_short( "Corridor - x8y16z1" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y16z1.c",
  "east" : DIR+"/rooms/x9y16z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
