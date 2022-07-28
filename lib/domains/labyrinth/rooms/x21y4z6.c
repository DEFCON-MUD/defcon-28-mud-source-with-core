inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 4, 6 }));
  set_short( "Corridor - x21y4z6" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y4z6.c",
  "east" : DIR+"/rooms/x22y4z6.c",
  "north" : DIR+"/rooms/x21y5z6.c",
  "south" : DIR+"/rooms/x21y3z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
