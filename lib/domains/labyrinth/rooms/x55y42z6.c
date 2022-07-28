inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 42, 6 }));
  set_short( "Corridor - x55y42z6" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y43z6.c",
  "south" : DIR+"/rooms/x55y41z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
