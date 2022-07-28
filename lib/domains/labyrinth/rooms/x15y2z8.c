inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 2, 8 }));
  set_short( "Corridor - x15y2z8" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y2z8.c",
  "north" : DIR+"/rooms/x15y3z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
