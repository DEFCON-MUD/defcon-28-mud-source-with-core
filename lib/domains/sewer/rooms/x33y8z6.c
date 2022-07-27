inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 8, 6 }));
  set_short( "Hallway - x33y8z6" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y8z6.c",
  "north" : DIR+"/rooms/x33y9z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
