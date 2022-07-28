inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 16, 5 }));
  set_short( "Hallway - x35y16z5" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y16z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east.%^RESET%^");
}
