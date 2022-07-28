inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 13, 1 }));
  set_short( "Corridor - x25y13z1" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y14z1.c",
  "south" : DIR+"/rooms/x25y12z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
