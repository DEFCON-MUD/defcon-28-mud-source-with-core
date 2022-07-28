inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 59, 9 }));
  set_short( "Corridor - x41y59z9" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y60z9.c",
  "south" : DIR+"/rooms/x41y58z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
