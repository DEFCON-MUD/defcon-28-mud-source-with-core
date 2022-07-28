inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 26, 8 }));
  set_short( "Corridor - x3y26z8" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y26z8.c",
  "south" : DIR+"/rooms/x3y25z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
