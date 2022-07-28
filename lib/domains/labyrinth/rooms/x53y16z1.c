inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 16, 1 }));
  set_short( "Corridor - x53y16z1" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y16z1.c",
  "north" : DIR+"/rooms/x53y17z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
