inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 4, 9 }));
  set_short( "Corridor - x21y4z9" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y4z9.c",
  "north" : DIR+"/rooms/x21y5z9.c",
  "south" : DIR+"/rooms/x21y3z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
