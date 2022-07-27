inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 6, 6 }));
  set_short( "Passage - x17y6z6" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y6z6.c",
  "south" : DIR+"/rooms/x17y5z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
