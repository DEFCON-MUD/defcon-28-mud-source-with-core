inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 8, 2 }));
  set_short( "Passage - x13y8z2" );
set_objects( DIR+"/monsters/deformedweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y8z2.c",
  "south" : DIR+"/rooms/x13y7z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
